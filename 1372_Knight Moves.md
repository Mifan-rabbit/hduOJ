>### Problem Description
>A friend of you is doing research on the Traveling Knight Problem (TKP) where you are to find the shortest closed tour of knight moves that visits each square of a given set of n squares on a chessboard exactly once. He thinks that the most difficult part of the problem is determining the smallest number of knight moves between two given squares and that, once you have accomplished this, finding the tour would be easy.
>Of course you know that it is vice versa. So you offer him to write a program that solves the "difficult" part.
>
>Your job is to write a program that takes two squares a and b as input and then determines the number of knight moves on a shortest route from a to b.
> 
>### Input
>The input file will contain one or more test cases. Each test case consists of one line containing two squares separated by one space. A square is a string consisting of a letter (a-h) representing the column and a digit (1-8) representing the row on the chessboard.
> 
>### Output
>For each test case, print one line saying "To get from xx to yy takes n knight moves.".
> 
>### Sample Input
>e2 e4<br>
>a1 b2<br>
>b2 c3<br>
>a1 h8<br>
>a1 h7<br>
>h8 a1<br>
>b1 c3<br>
>f6 f6<br>
> 
>### Sample Output
>To get from e2 to e4 takes 2 knight moves.<br>
>To get from a1 to b2 takes 4 knight moves.<br>
>To get from b2 to c3 takes 2 knight moves.<br>
>To get from a1 to h8 takes 6 knight moves.<br>
>To get from a1 to h7 takes 5 knight moves.<br>
>To get from h8 to a1 takes 6 knight moves.<br>
>To get from b1 to c3 takes 1 knight moves.<br>
>To get from f6 to f6 takes 0 knight moves.<br>

```cpp
#include <iostream>
#include <string.h>
#include <queue>
using namespace std;
struct pos
{
    char x;
    int y;
    int step;
};

int main()
{
    int y1, y2, visited[8][9], x_direction[] = {1, 2, 2, 1, -1, -2, -2, -1}, y_direction[] = {2, 1, -1, -2, -2, -1, 1, 2};
    char x1, x2;
    bool flag;
    queue<pos> q;
    pos temp_p, next_p;

    while (cin >> x1 >> y1 >> x2 >> y2)
    {
        memset(visited, 0, sizeof(visited));
        while (!q.empty())
        {
            q.pop();
        }

        temp_p.x = x1;
        temp_p.y = y1;
        temp_p.step = 0;

        if (x1 == x2 && y1 == y2)
        {
            flag = true;
            cout << "To get from " << x1 << y1 << " to " << x2 << y2 << " takes 0 knight moves.\n";
        }
        else
        {
            flag = false;
            q.push(temp_p);
        }

        while (!q.empty() && !flag)
        {
            temp_p = q.front();
            q.pop();
            for (int i = 0; i < 8 && !flag; i++)
            {
                next_p.x = temp_p.x + x_direction[i];
                next_p.y = temp_p.y + y_direction[i];

                if (next_p.x >= 'a' && next_p.x <= 'h' && next_p.y >= 1 && next_p.y <= 8 && visited[next_p.x - 'a'][next_p.y] == 0)
                {
                    visited[next_p.x - 'a'][next_p.y] = 1;
                    next_p.step = temp_p.step + 1;
                    if (next_p.x == x2 && next_p.y == y2)
                    {
                        cout << "To get from " << x1 << y1 << " to " << x2 << y2 << " takes " << next_p.step << " knight moves.\n";
                        flag = true;
                    }
                    q.push(next_p);
                }
            }
        }
    }
}
```
