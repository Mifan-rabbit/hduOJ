>### Problem Description<br>
>Speakless很早就想出国，现在他已经考完了所有需要的考试，准备了所有要准备的材料，于是，便需要去申请学校<br>
>了。要申请国外的任何大学，你都要交纳一定的申请费用，这可是很惊人的。Speakless没有多少钱，总共只攒了n万<br>
>美元。他将在m个学校中选择若干的（当然要在他的经济承受范围内）。每个学校都有不同的申请费用a（万美元），<br>
>并且Speakless估计了他得到这个学校offer的可能性b。不同学校之间是否得到offer不会互相影响。“I NEED A OFFER”，<br>
>他大叫一声。帮帮这个可怜的人吧，帮助他计算一下，他可以收到至少一份offer的最大概率。（如果Speakless选择<br>
>了多个学校，得到任意一个学校的offer都可以）。<br>
> <br>
>### Input<br>
>输入有若干组数据，每组数据的第一行有两个正整数n,m(0<=n<=10000,0<=m<=10000)<br>
>后面的m行，每行都有两个数据ai(整型),bi(实型)分别表示第i个学校的申请费用和可能拿到offer的概率。<br>
>输入的最后有两个0。<br>
> <br>
>### Output<br>
>每组数据都对应一个输出，表示Speakless可能得到至少一份offer的最大概率。用百分数表示，精确到小数点后<br>
>一位。<br>
> <br>
>Sample Input<br>
>10 3<br>
>4 0.1<br>
>4 0.2<br>
>5 0.3<br>
>0 0<br>
> <br>
>### Sample Output<br>
>44.0%<br>
```cpp
#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;
struct Expense
{
    int cost;
    float possibility;
};
int main()
{
    int money, n; //money存款，n个学校
    float dp[10001];
    Expense expense[10001];
    while (cin >> money >> n && (money != 0 || n != 0))
    {
        for (int i = 0; i <= money; i++) //初始化
        {
            dp[i] = 1;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> expense[i].cost >> expense[i].possibility;
            for (int j = money; j >= expense[i].cost; j--)
            {
                dp[j] = min(dp[j], dp[j - expense[i].cost] * (1 - expense[i].possibility));
            }
        }
        cout << fixed << setprecision(1) << 100 * (1 - dp[money]) << "%" << endl;
    }
    return 0;
}
```
