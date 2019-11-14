>### Problem Description<br>
>FatMouse has stored some cheese in a city. The city can be considered as a square grid of dimension n: each grid location is labelled (p,q) where 0 <= p < n and 0 <= q < n. At each grid location Fatmouse has hid between 0 and 100 blocks of cheese in a hole. Now he's going to enjoy his favorite food.<br>
><br>
>FatMouse begins by standing at location (0,0). He eats up the cheese where he stands and then runs either horizontally or vertically to another location. The problem is that there is a super Cat named Top Killer sitting near his hole, so each time he can run at most k locations to get into the hole before being caught by Top Killer. What is worse -- after eating up the cheese at one location, FatMouse gets fatter. So in order to gain enough energy for his next run, he has to run to a location which have more blocks of cheese than those that were at the current hole.<br>
><br>
>Given n, k, and the number of blocks of cheese at each grid location, compute the maximum amount of cheese FatMouse can eat before being unable to move.<br>
> <br>
>### Input<br>
>There are several test cases. Each test case consists of<br>
><br>
>a line containing two integers between 1 and 100: n and k<br>
>n lines, each with n numbers: the first line contains the number of blocks of cheese at locations (0,0) (0,1) ... (0,n-1); the next line contains the number of blocks of cheese at locations (1,0), (1,1), ... (1,n-1), and so on.<br>
>The input ends with a pair of -1's.<br>
> <br>
>### Output<br>
>For each test case output in a line the single integer giving the number of blocks of cheese collected.<br>
> <br>
>### Sample Input<br>
>3 1<br>
>1 2 5<br>
>10 11 6<br>
>12 12 7<br>
>-1 -1<br>
> <br>
>### Sample Output<br>
>37<br>
 
 ```cpp
 #include <iostream>
#include <string.h>
using namespace std;

int map[101][101], dp[101][101];
int size, step, dir[4][2] = {0, 1, 0, -1, 1, 0, -1, 0};

int dfs(int x, int y)
{
    int xx, yy, temp, max = 0;
    if (dp[x][y] != -1)
    {
        return dp[x][y]; //该点已经计算过
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 1; j <= step; j++) //2个循环控制该点所能走的地方
        {
            xx = x + dir[i][0] * j;
            yy = y + dir[i][1] * j;
            if (xx < 0 || xx >= size || yy < 0 || yy >= size || map[xx][yy] <= map[x][y]) //剪枝
                continue;
            temp = dfs(xx, yy);
            max = max > temp ? max : temp; //max保存到该点能吃到的最大奶酪数
        }
    }
    dp[x][y] = max + map[x][y];
    return dp[x][y];
}

int main()
{
    while (cin >> size >> step)
    {
        if (size == -1 && step == -1)
        {
            break;
        }
        memset(dp, -1, sizeof(dp)); //初始化数组
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                cin >> map[i][j];
            }
        }
        cout << dfs(0, 0) << endl;
    }
    return 0;
}
 
 ```
