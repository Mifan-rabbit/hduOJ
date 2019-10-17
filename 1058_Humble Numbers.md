>Problem Description<br>
>A number whose only prime factors are 2,3,5 or 7 is called a humble number. <br>
>The sequence 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 15, 16, 18, 20, 21, 24, 25, 27, ...<br>
>shows the first 20 humble numbers.<br>
>Write a program to find and print the nth element in this sequence<br>
> <br>
>Input<br>
>The input consists of one or more test cases. <br>
>Each test case consists of one integer n with 1 <= n <= 5842.<br>
>Input is terminated by a value of zero (0) for n.<br>
> <br>
>Output<br>
>For each test case, print one line saying "The nth humble number is number.". <br>
>Depending on the value of n, the correct suffix "st", "nd", "rd", or "th"<br>
>for the ordinal number nth has to be used like it is shown in the sample output.<br>
> <br>
>Sample Input<br>
>1<br>
>2<br>
>3<br>
>4<br>
>11<br>
>12<br>
>13<br>
>21<br>
>22<br>
>23<br>
>100<br>
>1000<br>
>5842<br>
>0<br>
> <br>
>Sample Output<br>
>The 1st humble number is 1.<br>
>The 2nd humble number is 2.<br>
>The 3rd humble number is 3.<br>
>The 4th humble number is 4.<br>
>The 11th humble number is 12.<br>
>The 12th humble number is 14.<br>
>The 13th humble number is 15.<br>
>The 21st humble number is 28.<br>
>The 22nd humble number is 30.<br>
>The 23rd humble number is 32.<br>
>The 100th humble number is 450.<br>
>The 1000th humble number is 385875.<br>
>The 5842nd humble number is 2000000000.<br>

```cpp
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

void num_end(int n)
{
    if (n % 100 != 11 && n % 10 == 1)
    {
        cout << "st";
    }
    else if (n % 100 != 12 && n % 10 == 2)
    {
        cout << "nd";
    }
    else if (n % 100 != 13 && n % 10 == 3)
    {
        cout << "rd";
    }
    else
    {
        cout << "th";
    }
}

int min(int a, int b, int c, int d)
{
    if (a <= b && a <= c && a <= d)
    {
        return a;
    }
    else if (b <= a && b <= c && b <= d)
    {
        return b;
    }
    else if (c <= a && c <= b && c <= d)
    {
        return c;
    }
    else
    {
        return d;
    }
}
int main()
{
    long long int f[5843] = {0, 1}, n;
    int o = 1, p = 1, q = 1, r = 1;
    for (int i = 2; i < 5843; i++)
    {
        n = min(2 * f[o], 3 * f[p], 5 * f[q], 7 * f[r]);
        f[i] = n;
        if (n == 2 * f[o])
        {
            o++;
        }
        if (n == 3 * f[p])
        {
            p++;
        }
        if (n == 5 * f[q])
        {
            q++;
        }
        if (n == 7 * f[r])
        {
            r++;
        }
    }
    while (cin >> n && n != 0)
    {
        cout << "The " << n;
        num_end(n);
        cout << " humble number is " << f[n] << "." << endl;
    }
    return 0;
}
```
