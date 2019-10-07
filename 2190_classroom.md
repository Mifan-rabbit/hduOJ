>### Problem Description<br>
>学校教室的长度为n米，宽度为3米，现在我们有2种地砖，规格分别是1米×1米，2米×2米，<br>
>如果要为该教室铺设地砖，请问有几种铺设方式呢？<br>
> 
>### Input<br>
>输入数据首先包含一个正整数C，表示包含C组测试用例，然后是C行数据，每行包含一个正整数n(1<=n<=30)，表示教室的长度。<br>
> 
>### Output<br>
>对于每组测试数据，请输出铺设地砖的方案数目，每个输出占一行。<br>
> 
>### Sample Input<br>
>2<br>
>2<br>
>3<br>
> 
>### Sample Output<br>
>3<br>
>5<br>

```cpp
#include <iostream>
using namespace std;

int main()
{
    int N, m;
    long long int s[31];
    s[1] = 1;
    s[2] = 3;
    for (int i = 3; i < 31; i++)
    {
        s[i] = s[i - 1] * s[1] + s[i - 2] * (s[2] - 1);
    }

    while (cin >> N)
    {
        while (N--)
        {
            cin >> m;
            cout << s[m] << endl;
        }
    }
    return 0;
}
```
