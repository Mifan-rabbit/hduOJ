>### Problem Description<br>
>任何一个大学生对菲波那契数列(Fibonacci numbers)应该都不会陌生，它是这样定义的：<br>
>F(1)=1;<br>
>F(2)=2;<br>
>F(n)=F(n-1)+F(n-2)(n>=3);<br>
>所以，1,2,3,5,8,13……就是菲波那契数列。<br>
>在HDOJ上有不少相关的题目，比如1005 Fibonacci again就是曾经的浙江省赛题。<br>
>今天，又一个关于Fibonacci的题目出现了，它是一个小游戏，定义如下：<br>
>1、  这是一个二人游戏;<br>
>2、  一共有3堆石子，数量分别是m, n, p个；<br>
>3、  两人轮流走;<br>
>4、  每走一步可以选择任意一堆石子，然后取走f个；<br>
>5、  f只能是菲波那契数列中的元素（即每次只能取1，2，3，5，8…等数量）；<br>
>6、  最先取光所有石子的人为胜者；<br>
><br>
>假设双方都使用最优策略，请判断先手的人会赢还是后手的人会赢。<br>
> <br>
>### Input<br>
>输入数据包含多个测试用例，每个测试用例占一行，包含3个整数m,n,p（1<=m,n,p<=1000）。<br>
>m=n=p=0则表示输入结束。<br>
> <br>
>### Output<br>
>如果先手的人能赢，请输出“Fibo”，否则请输出“Nacci”，每个实例的输出占一行。<br>
> <br>
>### Sample Input<br>
>1 1 1<br>
>1 4 1<br>
>0 0 0<br>
> <br>
>### Sample Output<br>
>Fibo<br>
>Nacci<br>

```cpp
#include <iostream>
#include <string.h>
using namespace std;
int fibonacci[18];
bool s[1001];
int SG[1001];

void first()
{
    fibonacci[1] = 1;
    fibonacci[2] = 1;
    for (int i = 3; i < 18; i++)
    {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }
}
void getSG()
{
    memset(SG, 0, sizeof(SG));
    //因为SG[0]始终等于0，所以i从1开始
    for (int i = 1; i < 1001; i++)
    {
        memset(s, false, sizeof(s));
        for (int j = 1; fibonacci[j] <= i && j < 18; j++)
            //j从一开始取值，代表斐波那契数列下标
            s[SG[i - fibonacci[j]]] = true;
        for (int j = 0;; j++)
            if (!s[j])
            {
                SG[i] = j;
                break;
            }
    }
}

int main()
{
    int m, n, p;
    first();
    getSG();
    while (cin >> m >> n >> p)
    {
        if (m == 0 && n == 0 && p == 0)
            break;
        else if (SG[m] ^ SG[n] ^ SG[p])
            cout << "Fibo\n";
        else
            cout << "Nacci\n";
    }
    return 0;
}
```
