>### Problem Description<br>
>The doggie found a bone in an ancient maze, which fascinated him a lot. However, when he picked it up, the maze began to shake, and the doggie could feel the ground sinking. He realized that the bone was a trap, and he tried desperately to get out of this maze.<br>
><br>
>The maze was a rectangle with sizes N by M. There was a door in the maze. At the beginning, the door was closed and it would open at the T-th second for a short period of time (less than 1 second). Therefore the doggie had to arrive at the door on exactly the T-th second. In every second, he could move one block to one of the upper, lower, left and right neighboring blocks. Once he entered a block, the ground of this block would start to sink and disappear in the next second. He could not stay at one block for more than one second, nor could he move into a visited block. Can the poor doggie survive? Please help him.<br>
> <br>
>### Input<br>
>The input consists of multiple test cases. The first line of each test case contains three integers N, M, and T (1 < N, M < 7; 0 < T < 50), which denote the sizes of the maze and the time at which the door will open, respectively. The next N lines give the maze layout, with each line containing M characters. A character is one of the following:<br>
><br>
>'X': a block of wall, which the doggie cannot enter;<br>
>'S': the start point of the doggie;<br>
>'D': the Door; or<br>
>'.': an empty block.<br>
><br>
>The input is terminated with three 0's. This test case is not to be processed.<br>
> <br>
>### Output<br>
>For each test case, print in one line "YES" if the doggie can survive, or "NO" otherwise.<br>
> <br>
>### Sample Input<br>
>4 4 5<br>
>S.X.<br>
>..X.<br>
>..XD<br>
>....<br>
>3 4 5<br>
>S.X.<br>
>..X.<br>
>...D<br>
>0 0 0<br>
> <br>
>### Sample Output<br>
>NO<br>
>YES<br>

```cpp
#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

char place[7][7]; //迷宫地图
int n, m, t, door_x, door_y, dog_x, dog_y, now_time, num_x;
bool flag, visited[7][7];
void dfs(int x, int y, int now_time)
{
    if (flag)
        return;
    if (now_time > t) //超时
        return;
    if (now_time == t && place[x][y]=='S')
    {
        flag = true;
        return;
    }
    int temp = t - now_time - abs(x - door_x) - abs(y - door_y);
    if (temp < 0 || temp & 1) //剪枝
        return;
    if (x + 1 < n && place[x + 1][y] != 'X' && !visited[x + 1][y])
    {
        visited[x + 1][y] = true;
        dfs(x + 1, y, now_time + 1);
        visited[x + 1][y] = false;
    }
    if (y + 1 < m && place[x][y + 1] != 'X' && !visited[x][y + 1])
    {
        visited[x][y + 1] = true;
        dfs(x, y + 1, now_time + 1);
        visited[x][y + 1] = false;
    }
    if (x - 1 > -1 && place[x - 1][y] != 'X' && !visited[x - 1][y])
    {
        visited[x - 1][y] = true;
        dfs(x - 1, y, now_time + 1);
        visited[x - 1][y] = false;
    }
    if (y - 1 > -1 && place[x][y - 1] != 'X' && !visited[x][y - 1])
    {
        visited[x][y - 1] = true;
        dfs(x, y - 1, now_time + 1);
        visited[x][y - 1] = false;
    }
}

int main()
{
    while (cin >> n >> m >> t)
    {
        if (n == 0 && m == 0 && t == 0)
        {
            return 0;
        }
        flag = false;
        now_time = 0;
        num_x = 0; //墙的数量
        memset(visited, false, sizeof(visited));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> place[i][j];
                if (place[i][j] == 'D')
                {
                    dog_x = i;
                    dog_y = j;
                    visited[i][j] = true;
                }
                else if (place[i][j] == 'S')
                {
                    door_x = i;
                    door_y = j;
                }
                else if (place[i][j] == 'X')
                {
                    num_x++;
                }
            }
        }
        if (n * m - num_x > t) //剪枝
        {
            dfs(dog_x, dog_y, now_time);
        }
        if (flag)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}
```
