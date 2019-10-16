>Problem Description<br>
>Nowadays, a kind of chess game called “Super Jumping! Jumping! Jumping!” is very popular in HDU. <br>
>Maybe you are a good boy, and know little about this game, so I introduce it to you now.<br>
><br>
>start->1->3->2->end<br>
><br>
>The game can be played by two or more than two players. <br>
>It consists of a chessboard（棋盘）and some chessmen（棋子）, <br>
>and all chessmen are marked by a positive integer or “start” or “end”.<br> 
>The player starts from start-point and must jumps into end-point finally. <br>
>In the course of jumping, the player will visit the chessmen in the path, <br>
>but everyone must jumps from one chessman to another absolutely bigger <br>
>(you can assume start-point is a minimum and end-point is a maximum.). <br>
>And all players cannot go backwards. One jumping can go from a chessman to next, <br>
>also can go across many chessmen, and even you can straightly get to end-point from start-point.<br>
>Of course you get zero point in this situation. <br>
>A player is a winner if and only if he can get a bigger score according to his jumping solution. <br>
>Note that your score comes from the sum of value on the chessmen in you jumping path.<br>
>Your task is to output the maximum value according to the given chessmen list.<br>
> <br>
>Input<br>
>Input contains multiple test cases. Each test case is described in a line as follow:<br>
>N value_1 value_2 …value_N<br>
>It is guarantied that N is not more than 1000 and all value_i are in the range of 32-int.<br>
>A test case starting with 0 terminates the input and this test case is not to be processed. <br>
><br>
>Output<br>
>For each case, print the maximum according to rules, and one line one case.<br>
> <br>
>Sample Input<br>
>3 1 3 2<br>
>4 1 2 3 4<br>
>4 3 3 2 1<br>
>0<br>
><br>
>Sample Output<br>
>4<br>
>10<br>
>3<br>

```cpp
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long int N, m[1001], score[1001], temp;
    while (cin >> N && N != 0)
    {
        for (int i = 0; i < N; i++)
        {
            cin >> m[i];
            temp = 0;
            for (int j = i - 1; j >= 0; j--)
            {
                if (m[i] > m[j] && temp < score[j])
                {
                    temp = score[j];
                }
            }
            score[i] = m[i] + temp;
        }
        sort(score, score + N, [](int a, int b) { return a > b; });
        cout << score[0] << endl;
    }
    return 0;
}
```
