>### Problem Description<br>
>Angel was caught by the MOLIGPY! He was put in prison by Moligpy. <br>
>The prison is described as a N * M (N, M <= 200) matrix. There are<br>
>WALLs, ROADs, and GUARDs in the prison.<br>
><br>
>Angel's friends want to save Angel. Their task is: approach Angel.<br>
>We assume that "approach Angel" is to get to the position where Angel<br>
>stays. When there's a guard in the grid, we must kill him (or her?)<br>
>to move into the grid. We assume that we moving up, down, right, <br>
>left takes us 1 unit time, and killing a guard takes 1 unit time, <br>
>too. And we are strong enough to kill all the guards.<br>
><br>
>You have to calculate the minimal time to approach Angel. (We can <br>
>move only UP, DOWN, LEFT and RIGHT, to the neighbor grid within bound,<br>
>of course.)<br>
> <br>
>### Input<br>
>First line contains two integers stand for N and M.<br>
>Then N lines follows, every line has M characters. "." stands for road, "a" stands for Angel, and "r" stands for each of Angel's friend.<br>
>Process to the end of the file.<br>
> <br>
>### Output<br>
>For each test case, your program should output a single integer, standing for the minimal time needed. If such a number does no exist, you should output a line containing "Poor ANGEL has to stay in the prison all his life."<br>
> <br>
>### Sample Input<br>
>7 8<br>
>#.#####.<br>
>#.a#..r.<br>
>#..#x...<br>
>..#..#.#<br>
>#...##..<br>
>.#......<br>
>........<br>
> <br>
>### Sample Output<br>
>13<br>

```cpp
#include <iostream>
#include <string.h>
#include <queue>
using namespace std;
char unvisited[200][200];
int M, N, x, y, len, x_direction[4] = {1, -1, 0, 0}, y_direction[4] = {0, 0, 1, -1};
struct pos
{
    int a;
    int b;
    int step;
} temp_p, next_p;

int bfs()
{
    int mark[200][200];
    memset(mark, 0, sizeof(mark));
    queue<pos> q;
    temp_p.a = x;
    temp_p.b = y;
    temp_p.step = 0;
    q.push(temp_p);
    while (!q.empty())
    {
        temp_p = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            next_p.a = temp_p.a + x_direction[i];
            next_p.b = temp_p.b + y_direction[i];
            next_p.step = temp_p.step + 1;
            if (unvisited[next_p.a][next_p.b] == 'r')
            {
                len = next_p.step;
                return next_p.step;
            }
            if (next_p.a >= 0 && next_p.a < M && next_p.b >= 0 && next_p.b < N && mark[next_p.a][next_p.b] == 0)
            {
                switch (unvisited[next_p.a][next_p.b])
                {
                case 'x':
                    next_p.step++;
                case '.':
                    q.push(next_p);
                default:
                    mark[next_p.a][next_p.b] = 1;
                    break;
                }
            }
        }
    }
    return -1;
}

int main()
{
    while (cin >> M >> N)
    {
        len = INT_MAX;
        for (int i = 0; i < M; i++)
        {
            cin >> unvisited[i];
            for (int j = 0; j < N; j++)
            {

                if (unvisited[i][j] == 'a')
                {
                    x = i;
                    y = j;
                }
            }
        }

        if (bfs() != -1)
        {
            cout << len << endl;
        }
        else
        {
            cout << "Poor ANGEL has to stay in the prison all his life." << endl;
        }
    }
}
```
