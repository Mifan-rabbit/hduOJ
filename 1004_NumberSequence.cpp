/*
*Problem Description
*A number sequence is defined as follows:<br><br>f(1) = 1, f(2) = 1, f(n) = (A * f(n - 1) + B * f(n - 2)) mod 7.<br><br>Given A, B, and n, you are to calculate the value of f(n).<br>
* 
*
*Input
*The input consists of multiple test cases. Each test case contains 3 integers A, B and n on a single line (1 <= A, B <= 1000, 1 <= n <= 100,000,000). Three zeros signal the end of input and this test case is not to be processed.<br>
* 
*
*Output
*For each test case, print the value of f(n) on a single line.<br>
* 
*
*Sample Input
*1 1 3
*1 2 10
*0 0 0
* 
*
*Sample Output
*2
*5
*/

/********************************************凑巧********************************************/
#include <iostream>
using namespace std;

int main()
{
    int sequence[336] = {1, 1, 1}, a, b, now;
    while (cin >> a >> b >> now && (a != 0 || b != 0 || now != 0))
    {
        for (int n = 3; n < 336; n++)
        {
            sequence[n] = (a * sequence[n - 1] + b * sequence[n - 2]) % 7;
        }
        sequence[0] = (a * sequence[335] + b * sequence[334]) % 7;
        cout << sequence[now % 336] << endl;
    }
}

/*
*不严谨找周期
*/
#include <iostream>
using namespace std;

int period(int a, int b)
{
    int t = 0, f1 = 1, f2 = 1, temp;
    if (a == 0 || b == 0)
        return 12;
    if ((a + b) % 7 == 1)
        return 1;
    while (1)
    {
        temp = (a * f2 + b * f1) % 7;
        f1 = f2;
        f2 = temp;
        t++;
        if (f1 == 1 && f2 == 1) /*再次遇到f1 = 1，f2 = 1的时候跳出*/
            break;
    }
    return t;
}

int main()
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            cout << period(i, j) << "\t";
        }
        cout << endl;
    }
}

/********************************************矩阵快速幂********************************************/
