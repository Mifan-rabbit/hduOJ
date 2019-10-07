>### Description
>未名湖附近共有N个大小湖泊L1, L2, ..., Ln(其中包括未名湖)，每个湖泊Li里住着一只青蛙Fi(1 ≤ i ≤ N)。<br>
>如果湖泊Li和Lj之间有水路相连，则青蛙Fi和Fj互称为邻居。现在已知每只青蛙的邻居数目x1, x2, ..., xn，<br>
>请你给出每两个湖泊之间的相连关系。<br>
>
>### Input
>第一行是测试数据的组数T(0 ≤ T ≤ 20)。每组数据包括两行，第一行是整数N(2 < N < 10)，<br>
>第二行是N个整数，x1, x2,..., xn(0 ≤ xi ≤ N)。<br>
>
>### Output
>对输入的每组测试数据，如果不存在可能的相连关系，输出"NO"。否则输出"YES"，并用N×N的矩阵表示湖泊间的相邻关系，<br>
>即如果湖泊i与湖泊j之间有水路相连，则第i行的第j个数字为1，否则为0。每两个数字之间输出一个空格。<br>
>如果存在多种可能，只需给出一种符合条件的情形。相邻两组测试数据之间输出一个空行。<br>
>
>### Sample Input
>3
>7
>4 3 1 5 4 2 1 
>6
>4 3 1 4 2 0 
>6
>2 3 1 1 2 1 
>
>Sample Output
>YES
>0 1 0 1 1 0 1 
>1 0 0 1 1 0 0 
>0 0 0 1 0 0 0 
>1 1 1 0 1 1 0 
>1 1 0 1 0 1 0 
>0 0 0 1 1 0 0 
>1 0 0 0 0 0 0 
>
>NO
>
>YES
>0 1 0 0 1 0 
>1 0 0 1 1 0 
>0 0 0 0 0 1 
>0 1 0 0 0 0 
>1 1 0 0 0 0 
>0 0 1 0 0 0 

```cpp
#include <iostream>
#include <algorithm>
using namespace std;

struct fog_lake
{
    int connection, n;
} fl[100];

bool com(fog_lake f1, fog_lake f2)
{
    return f1.connection > f2.connection;
}

int main()
{
    int N, n, l[100][100] = {0};
    bool flag = true;
    while (cin >> N)
    {
        while (N--)
        {
            while (cin >> n)
            {
                flag = true;
                for (int i = 0; i < n; ++i)
                {
                    for (int j = 0; j < n; ++j)
                        l[i][j] = 0;
                }
                for (int i = 0; i < n; ++i)
                {
                    cin >> fl[i].connection;
                    fl[i].n = i;
                }

                for (int i = 0; i < n; i++)
                {
                    sort(fl + i, fl + n, com);
                    if (fl[i].connection < 0 || fl[i].connection + i > n)
                    {
                        flag = false;
                        break;
                    }
                    else
                    {
                        for (int j = 1; j <= fl[i].connection; ++j)
                        {
                            --fl[i + j].connection;
                            l[fl[i + j].n][fl[i].n] = l[fl[i].n][fl[i + j].n] = 1;
                        }
                    }
                }
                if (flag)
                {
                    cout << "YES" << endl;
                    for (int i = 0; i < n; ++i)
                    {
                        for (int j = 0; j < n; ++j)
                        {
                            if (j)
                                cout << " ";
                            cout << l[i][j];
                        }
                        cout << endl;
                    }
                    cout << endl;
                }
                else
                {
                    cout << "NO" << endl
                         << endl;
                }
            }
        }
    }
}
```
