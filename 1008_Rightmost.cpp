/*
*用快速幂解题
*
*Problem Description
*Given a positive integer N, you should output the most right digit of N^N.
* 
*Input
*The input contains several test cases. The first line of the input is a single integer T which is the number of test cases. T test cases follow. 
*
*Output
*For each test case, you should output the rightmost digit of N^N.
* 
*Sample Input
*2
*3
*4
* 
*Sample Output
*7
*6
*/


#include <iostream>
using namespace std;
int main()
{
    int n[] = {0, 1, 4, 7, 6, 5, 6, 3, 6, 9, 0, 1, 6, 3, 6, 5, 6, 7, 4, 9}, n1, n2;
    while (cin >> n1)
    {
        while (n1--)
        {
            cin >> n2;
            cout << n[n2 % 20] << endl;
        }
    }
}
