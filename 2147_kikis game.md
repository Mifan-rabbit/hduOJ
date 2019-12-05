>### Problem Description<br>
>Recently kiki has nothing to do. While she is bored, an idea appears in his mind, she just playes the checkerboard game.The size of the chesserboard is n*m.First of all, a coin is placed in the top right corner(1,m). Each time one people can move the coin into the left, the underneath or the left-underneath blank space.The person who can't make a move will lose the game. kiki plays it with ZZ.The game always starts with kiki. If both play perfectly, who will win the game?<br>
> <br>
>### Input<br>
>Input contains multiple test cases. Each line contains two integer n, m (0<n,m<=2000). The input is terminated when n=0 and m=0.<br>
><br>
> <br>
>### Output<br>
>If kiki wins the game printf "Wonderful!", else "What a pity!".<br>
> <br>
>### Sample Input<br>
>5 3<br>
>5 4<br>
>6 6<br>
>0 0<br>
> <br>
>### Sample Output<br>
>What a pity!<br>
>Wonderful!<br>
>Wonderful!<br>

```cpp
#include<iostream>
using namespace std;
int main()
{
    int n, m;
    while(cin>>n>>m)
    {
        if(n==0&&m==0)
        {
            return 0;
        }
        if(n%2&&m%2)
        {
            cout << "What a pity!"<<endl;
        }
        else
        {
            cout << "Wonderful!"<<endl;
        }
        
    }
}
```
