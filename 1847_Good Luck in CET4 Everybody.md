>### Problem Description<br>
>大学英语四级考试就要来临了，你是不是在紧张的复习？也许紧张得连短学期的ACM都没工夫练习了，反正我知道的Kiki和Cici都是如此。当然，作为在考场浸润了十几载的当代大学生，Kiki和Cici更懂得考前的放松，所谓“张弛有道”就是这个意思。这不，Kiki和Cici在每天晚上休息之前都要玩一会儿扑克牌以放松神经。<br>
>“升级”？“双扣”？“红五”？还是“斗地主”？<br>
>当然都不是！那多俗啊~<br>
>作为计算机学院的学生，Kiki和Cici打牌的时候可没忘记专业，她们打牌的规则是这样的：<br>
>1、  总共n张牌;<br>
>2、  双方轮流抓牌；<br>
>3、  每人每次抓牌的个数只能是2的幂次（即：1，2，4，8，16…）<br>
>4、  抓完牌，胜负结果也出来了：最后抓完牌的人为胜者；<br>
>假设Kiki和Cici都是足够聪明（其实不用假设，哪有不聪明的学生~），并且每次都是Kiki先抓牌，请问谁能赢呢？<br>
>当然，打牌无论谁赢都问题不大，重要的是马上到来的CET-4能有好的状态。<br>
><br>
>#### Good luck in CET-4 everybody!<br>
> <br>
>### Input<br>
>输入数据包含多个测试用例，每个测试用例占一行，包含一个整数n（1<=n<=1000）。<br>
> <br>
>### Output<br>
>如果Kiki能赢的话，请输出“Kiki”，否则请输出“Cici”，每个实例的输出占一行。<br>
> <br>
>### Sample Input<br>
>1<br>
>3<br>
> <br>
>### Sample Output<br>
>Kiki<br>
>Cici<br>

```cpp
#include <iostream>
    using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        if (n % 3 == 0)
        {
            cout << "Cici\n";
        }
        else
        {
            cout << "Kiki\n";
        }
    }
    return 0;
}
```
