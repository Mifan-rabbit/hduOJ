>### Problem Description<br>
>Many years ago , in Teddy’s hometown there was a man who was called “Bone Collector”.<br>
>This man like to collect varies of bones , such as dog’s , cow’s , also he went to the grave …<br>
>The bone collector had a big bag with a volume of V ,and along his trip of collecting <br>
>there are a lot of bones , obviously , different bone has different value and different volume,<br>
>now given the each bone’s value along his trip , can you calculate out the maximum of the <br>
>total value the bone collector can get ?<br>
><br>
>### Input<br>
>The first line contain a integer T , the number of cases.Followed by T cases , each case three lines , <br>
>the first line contain two integer N , V,(N <= 1000 , V <= 1000 )representing the number of bones <br>
>and the volume of his bag.And the second line contain N integers representing the value of each bone. <br>
>The third line contain N integers representing the volume of each bone.<br>
> <br>
>### Output<br>
>One integer per line representing the maximum of the total value (this number will be less than 231).<br>
> <br>
>### Sample Input<br>
>1<br>
>5 10<br>
>1 2 3 4 5<br>
>5 4 3 2 1<br>
> <br>
>### Sample Output<br>
>14<br>

```cpp
#include <iostream>
#include <string.h>
using namespace std;
struct Bone
{
    int value;
    int v;
};

int max(long long int a, long long int b)
{
    return a > b ? a : b;
}

int main()
{
    int T, N, V; //案例数，骨头数量，包的体积
    long long int dp[1001];
    Bone bone[1000];
    while (cin >> T)
    {
        while (T--)
        {
            cin >> N >> V;
            for (int j = 0; j < N; j++)
            {
                cin >> bone[j].value;
            }

            for (int j = 0; j < N; j++)
            {
                cin >> bone[j].v;
            }
            memset(dp, 0, sizeof(dp));
            for (int i = 0; i < N; i++)
            {
                for (int j = V; j >= bone[i].v; j--) //背包甚至不能单装该件物体
                {
                    dp[j] = max(dp[j], dp[j - bone[i].v] + bone[i].value);
                }
            }
            cout << dp[V] << endl;
        }
    }
}
```
