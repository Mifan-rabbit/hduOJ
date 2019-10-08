>### Problem Description
>在一无限大的二维平面中，我们做如下假设：<br>
>1、  每次只能移动一格；<br>
>2、  不能向后走（假设你的目的地是“向上”，那么你可以向左走，可以向右走，也可以向上走，但是不可以向下走）；<br>
>3、  走过的格子立即塌陷无法再走第二次；<br>
>求走n步不同的方案数（2种走法只要有一步不一样，即被认为是不同的方案）。<br>
>### Input
>首先给出一个正整数C，表示有C组测试数据<br>
>接下来的C行，每行包含一个整数n (n<=20)，表示要走n步。<br>
>### Output
>请编程输出走n步的不同方案总数；<br>
>每组的输出占一行。<br>
>### Sample Input
>2<br>
>1<br>
>2<br>
>### Sample Output
>3<br>
>7<br>

```cpp
#include <iostream>
using namespace std;

int main()
{
    long long int s[21];
    int C, x;
    s[1] = 3;
    s[2] = 7;
    for (int i = 3; i < 21; i++)
    {
        s[i] = 2 * s[i - 1] + s[i - 2];
    }
    while (cin >> C)
    {
        while (C--)
        {
            cin >> x;
            cout << s[x] << endl;
        }
    }
    return 0;
}
```
