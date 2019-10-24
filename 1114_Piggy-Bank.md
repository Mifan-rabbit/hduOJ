>### Problem Description<br>
>Before ACM can do anything, a budget must be prepared and the necessary financial support <br>
>obtained. The main income for this action comes from Irreversibly Bound Money (IBM). The idea<br>
>behind is simple. Whenever some ACM member has any small money, he takes all the coins and<br>
>throws them into a piggy-bank. You know that this process is irreversible, the coins cannot <br>
>be removed without breaking the pig. After a sufficiently long time, there should be enough <br>
>cash in the piggy-bank to pay everything that needs to be paid.<br>
><br>
>But there is a big problem with piggy-banks. It is not possible to determine how much money <br>
>is inside. So we might break the pig into pieces only to find out that there is not enough<br>
>money. Clearly, we want to avoid this unpleasant situation. The only possibility is to weigh<br>
>the piggy-bank and try to guess how many coins are inside. Assume that we are able to determine<br>
>the weight of the pig exactly and that we know the weights of all coins of a given currency.<br>
>Then there is some minimum amount of money in the piggy-bank that we can guarantee. Your task<br>
>is to find out this worst case and determine the minimum amount of cash inside the piggy-bank.<br>
>We need your help. No more prematurely broken pigs!<br>
> <br>
>### Input<br>
>The input consists of T test cases. The number of them (T) is given on the first line of the<br>
>input file. Each test case begins with a line containing two integers E and F. They indicate <br>
>the weight of an empty pig and of the pig filled with coins. Both weights are given in grams.<br>
>No pig will weigh more than 10 kg, that means 1 <= E <= F <= 10000. On the second line of each <br>
>test case, there is an integer number N (1 <= N <= 500) that gives the number of various coins<br>
>used in the given currency. Following this are exactly N lines, each specifying one coin type.<br>
>These lines contain two integers each, Pand W (1 <= P <= 50000, 1 <= W <=10000). P is the value <br>
>of the coin in monetary units, W is it's weight in grams.<br>
> <br>
>### Output<br>
>Print exactly one line of output for each test case. The line must contain the sentence "<br>
>The minimum amount of money in the piggy-bank is X." where X is the minimum amount of money<br>
>that can be achieved using coins with the given total weight. If the weight cannot be reached <br>
>exactly, print a line "This is impossible.".<br>
> <br>
>### Sample Input<br>
>3<br>
>10 110<br>
>2<br>
>1 1<br>
>30 50<br>
>10 110<br>
>2<br>
>1 1<br>
>50 30<br>
>1 6<br>
>2<br>
>10 3<br>
>20 4<br>
> <br>
>### Sample Output<br>
>The minimum amount of money in the piggy-bank is 60.<br>
>The minimum amount of money in the piggy-bank is 100.<br>
>This is impossible.<br>

```cpp
#include <iostream>
using namespace std;

struct Coin
{
    int value;
    int weight;
};
int min(int a, int b)
{
    return a < b ? a : b;
}
int main()
{
    int T, E, F, N, dp[10000]; //测试数量，空猪重量，装满硬币的重量，硬币种类
    Coin coin[501];          //最多500种硬币
    while (cin >> T)
    {
        while (T--) //后缀自减
        {
            dp[0] = 0;
            cin >> E >> F >> N;
            for (int i = 0; i < N; i++)
            {
                cin >> coin[i].value >> coin[i].weight;
            }
            for (int i = 1; i <= F - E; i++)
            {
                dp[i] = 1000000; //初始化
            }
            for (int i = 0; i < N; i++)
            {
                for (int j = coin[i].weight; j <= F - E; j++)
                {
                    dp[j] = min(dp[j], dp[j - coin[i].weight] + coin[i].value);
                }
            }
            if (dp[F - E] != 1000000)
            {
                cout << "The minimum amount of money in the piggy-bank is " << dp[F - E] << ".\n";
            }
            else
            {
                cout << "This is impossible.\n";
            }
        }
    }
}
```
