>### Problem Description<br>
>Every girl likes shopping,so does dandelion.Now she finds the shop is increasing the price every day because the Spring Festival is coming .She is fond of a shop which is called "memory". Now she wants to know the rank of this shop's price after the change of everyday.<br>
> <br>
>### Input<br>
>One line contians a number n ( n<=10000),stands for the number of shops.<br>
>Then n lines ,each line contains a string (the length is short than 31 and only contains lowercase letters and capital letters.)stands for the name of the shop.<br>
>Then a line contians a number m (1<=m<=50),stands for the days .<br>
>Then m parts , every parts contians n lines , each line contians a number s and a string p ,stands for this day ,the shop p 's price has increased s.<br>
> <br>
>### Output<br>
>Contains m lines ,In the ith line print a number of the shop "memory" 's rank after the ith day. We define the rank as :If there are t shops' price is higher than the "memory" , than its rank is t+1.<br>
> <br>
>### Sample Input<br>
>3<br>
>memory<br>
>kfc<br>
>wind<br>
>2<br>
>49 memory<br>
>49 kfc<br>
>48 wind<br>
>80 kfc<br>
>85 wind<br>
>83 memory<br>
> <br>
>### Sample Output<br>
>1<br>
>2<br>
<br>

```cpp
#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
    map<string, int> store; //当map中有这个关键字时，insert操作是不能在插入数据的，但是用数组方式就不同了，它可以覆盖以前该关键字对 应的值
    int n, m, t, price[10000], temp_price;
    string name;
    while (cin >> n) //n家商店
    {
        store.erase(store.begin(), store.end());
        for (int i = 0; i < n; i++)
        {
            cin >> name;
            store[name] = i;
            price[i] = 0;
        }

        cin >> m; //m天
        while (m--)
        {
            for (int i = 0; i < n; i++)
            {
                cin >> temp_price >> name;
                price[store[name]] += temp_price;
            }
            name = " memory";
            t = 1;
            for (int i = 0; i < n; i++)
            {
                if (price[i] > price[store[name]])
                    ++t;
            }
            cout << t << endl;
        }
    }
}
```
