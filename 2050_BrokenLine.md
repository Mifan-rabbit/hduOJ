### Problem Description
我们看到过很多直线分割平面的题目，今天的这个题目稍微有些变化，我们要求的是n条折线分割平面的最大数目。<br>
比如，一条折线可以将平面分成两部分，两条折线最多可以将平面分成7部分。<br>

### Input
输入数据的第一行是一个整数C,表示测试实例的个数，然后是C 行数据，每行包含一个整数n(0<n<=10000),表示折线的数量。<br>

### Output
对于每个测试实例，请输出平面的最大分割数，每个实例的输出占一行。<br>

### Sample Input
2<br>
1<br>
2 <br>

### Sample Output
2<br>
7<br>


```cpp
#include <iostream>
using namespace std;

int main()
{
    int N, C;
    long long int s[10001];
    s[1] = 2;
    s[2] = 7;
    for (int i = 2; i < 10001; i++)
    {
        s[i] = s[i - 1] - 3 + 4 * i;
    }
    while (cin >> C)
    {
        while (C--)
        {
            cin >> N;
            cout << s[N] << endl;
        }
    }
    return 0;
}
```
