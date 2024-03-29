>### Problem Description<br>
>大学时光是浪漫的，女生是浪漫的，圣诞更是浪漫的，但是Rabbit和Grass这两个大学女生在今年的圣诞节却表现得一点都不浪漫：不去逛商场，不去逛公园，不去和AC男约会，两个人竟然猫在寝食下棋……<br>
>说是下棋，其实只是一个简单的小游戏而已，游戏的规则是这样的：<br>
>1、棋盘包含1*n个方格，方格从左到右分别编号为0，1，2，…，n-1；<br>
>2、m个棋子放在棋盘的方格上，方格可以为空，也可以放多于一个的棋子；<br>
>3、双方轮流走棋；<br>
>4、每一步可以选择任意一个棋子向左移动到任意的位置（可以多个棋子位于同一个方格），当然，任何棋子不能超出棋盘边界；<br>
>5、如果所有的棋子都位于最左边（即编号为0的位置），则游戏结束，并且规定最后走棋的一方为胜者。<br>
><br>
>对于本题，你不需要考虑n的大小（我们可以假设在初始状态，棋子总是位于棋盘的适当位置）。下面的示意图即为一个1*15的棋盘，共有6个棋子，其中，编号8的位置有两个棋子。<br>
>
> 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14
> :-: | :-: | :-: | :-: | :-:| :-: | :-: | :-: | :-:| :-: | :-: | :-: | :-: | :-:| :-:
>   |   |   |   | ◍ |   |   |   | ◍◍ | ◍ | ◍ |   |   | ◍ | 
>
><br>
>大家知道，虽然偶尔不够浪漫，但是Rabbit和Grass都是冰雪聪明的女生，如果每次都是Rabbit先走棋，请输出最后的结果。<br>
> 
>### Input<br>
>输入数据包含多组测试用例，每个测试用例占二行，首先一行包含一个整数m（0<=m<=1000），表示本测试用例的棋子数目，紧跟着的一行包含m个整数Ki(i=1…m; 0<=Ki<=1000)，分别表示m个棋子初始的位置，m=0则结束输入。<br>
>
>### Output<br>
>如果Rabbit能赢的话，请输出“Rabbit Win!”，否则请输出“Grass Win!”，每个实例的输出占一行。<br>
>
>### Sample Input<br>
>2 <br>
>3 5<br>
>3<br>
>3 5 6<br>
>0<br>
> <br>
>### Sample Output<br>
>Rabbit Win!<br>
>Grass Win!<br>

```cpp
#include <iostream>
using namespace std;
int main()
{
    int m, k, result;
    while (cin >> m)
    {
        if (!m)
            break;
        result = 0;
        for (int i = 0; i < m; i++)
        {
            cin >> k;
            result = result ^ k;
        }
        if (!result)
            cout << "Grass Win!" << endl;
        else
            cout << "Rabbit Win!" << endl;
    }
    return 0;
}
```
