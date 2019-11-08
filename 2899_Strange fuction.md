>### Problem Description<br>
>Now, here is a fuction:<br>
>&emsp;&emsp;F(x) = 6 * x^7+8*x^6+7*x^3+5*x^2-y*x (0 <= x <=100)<br>
>Can you find the minimum value when x is between 0 and 100.<br>
> <br>
>### Input<br>
>The first line of the input contains an integer T(1<=T<=100) which means the number of test cases. Then T lines follow, each line has only one real numbers Y.(0 < Y <1e10)<br>
> <br>
>### Output<br>
>Just the minimum value (accurate up to 4 decimal places),when x is between 0 and 100.<br>
> <br>
>### Sample Input<br>
>2<br>
>100<br>
>200<br>
> <br>
>### Sample Output<br>
>-74.4291<br>
>-178.8534<br> 

```cpp
#include <iostream>
#include <cmath>
using namespace std;

double formulation(double x, double y)
{
    return (6 * pow(x, 7) + 8 * pow(x, 6) + 7 * pow(x, 3) + 5 * pow(x, 2) - y * x);
}

void tripple(double y)
{
    double low = 0, high = 100, mlow, mhigh;
    while (high - low > 1e-6)
    {
        mlow = low + (high - low) / 3;
        mhigh = high - (high - low) / 3;
        if (formulation(mlow, y) > formulation(mhigh, y))
        {
            low = mlow;
        }
        else
        {
            high = mhigh;
        }
    }
    printf("%.4lf\n", formulation(high, y));
}
int main()
{
    int T;
    double x, y;
    cin >> T;
    while (T--)
    {
        cin >> y;
        tripple(y);
    }
}

```
