>### Problem Description<br>
>Fermat's theorem states that for any prime number p and for any integer a > 1, a^p == a (mod p). That is, if we raise a to the pth power and divide by p, the remainder is a. Some (but not very many) non-prime values of p, known as base-a pseudoprimes, have this property for some a. (And some, known as Carmichael Numbers, are base-a pseudoprimes for all a.)<br>
>Given 2 < p ≤ 1,000,000,000 and 1 < a < p, determine whether or not p is a base-a pseudoprime.<br>
> <br>
>### Input<br>
>Input contains several test cases followed by a line containing "0 0". Each test case consists of a line containing p and a.<br>
> <br>
>### Output<br>
>For each test case, output "yes" if p is a base-a pseudoprime; otherwise output "no".<br>
> <br>
>### Sample Input<br>
>3 2<br>
>10 3<br>
>341 2<br>
>341 3<br>
>1105 2<br>
>1105 3<br>
>0 0<br>
> <br>
>### Sample Output<br>
>no<br>
>no<br>
>yes<br>
>no<br>
>yes<br>
>yes<br>
<br>
```cpp
#include <iostream>
#include <math.h>
using namespace std;

bool sushu(long long int p)
{
    for (int i = 2; i <= sqrt(p); i++)
    {
        if (p % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool PowAndMod(long long int a, long long int p)
{
    long long int result = 1, temp = a, temp_p = p;
    while (p)
    {
        if (p & 1)
        {
            result = result * temp % temp_p;
        }
        temp = temp * temp % temp_p;
        p >>= 1;
    }
    if (result % temp_p == a)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    long long int p, a;
    while (cin >> p >> a)
    {
        if (a == 0 && p == 0)
        {
            return 0;
        }
        else if (!sushu(p) && PowAndMod(a, p))
        {
            cout << "yes\n";
        }
        else
        {
            cout << "no\n";
        }
    }
}
```
