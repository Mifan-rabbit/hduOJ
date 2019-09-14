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

#include <iostream>
using namespace std;

int main()
{
    int sequence[48] = {1, 1, 1}, a, b, now;
    while (cin >> a >> b >> now && (a != 0 || b != 0 || now != 0))
    {
        for (int n = 3; n < 48; n++)
        {
            sequence[n] = (a * sequence[n - 1] + b * sequence[n - 2]) % 7;
        }
        sequence[0] = (a * sequence[47] + b * sequence[46]) % 7;
        cout << sequence[now % 48] << endl;
    }
}
