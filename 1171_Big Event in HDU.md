>### Problem Description<br>
>Nowadays, we all know that Computer College is the biggest department in HDU. But, maybe you <br>
>don't know that Computer College had ever been split into Computer College and Software College <br>
>in 2002.The splitting is absolutely a big event in HDU! At the same time, it is a trouble thing <br>
>too. All facilities must go halves. First, all facilities are assessed, and two facilities are <br>
>thought to be same if they have the same value. It is assumed that there is N (0<N<1000) kinds <br>
of facilities (different value, different kinds).<br>
> <br>
>### Input<br>
>Input contains multiple test cases. Each test case starts with a number N (0 < N <= 50 -- the total <br>
>number of different facilities). The next N lines contain an integer V (0<V<=50 --value of facility) <br>
>and an integer M (0<M<=100 --corresponding number of the facilities) each. You can assume that all V <br>
>are different.A test case starting with a negative integer terminates input and this test case is not <br>
>to be processed.<br>
> <br>
>### Output<br>
>For each case, print one line containing two integers A and B which denote the value of Computer <br>
>College and Software College will get respectively. A and B should be as equal as possible. At the<br>
>same time, you should guarantee that A is not less than B.<br>
><br>
>### Sample Input<br>
>2<br>
>10 1<br>
>20 1<br>
>3<br>
>10 1 <br>
>20 2<br>
>30 1<br>
>-1<br>
> <br>
>### Sample Output<br>
>20 10<br>
>40 40<br>

```cpp
#include <iostream>
#include <string.h>
using namespace std;
struct Facility
{
    int V; //价值
    int M; //数量
};

int max(int a, int b)
{
    return a > b ? a : b;
}

int main()
{
    int N, dp[250001], all, mid;
    Facility facility[51];
    while (cin >> N && N >-1)
    {
        all = 0; //初始化总价值
        memset(dp, 0, sizeof(dp));//初始化
        for (int i = 0; i < N; i++)
        {
            cin >> facility[i].V >> facility[i].M;
            all += facility[i].M * facility[i].V; //总价值
        }
        mid = all / 2;
        for (int i = 0; i < N; i++) //有N种大米
        {
            for (int j = 0; j < facility[i].M; j++) //该种大米有facility[i].M袋
            {
                for (int k = mid; k >= facility[i].V; k--) //以价值为容量的背包，使背包里的价值最大
                {
                    dp[k] = max(dp[k], dp[k - facility[i].V] + facility[i].V);
                }
            }
        }
        cout << all - dp[mid] << " " << dp[mid] << endl;
    }
    return 0;
}
```
