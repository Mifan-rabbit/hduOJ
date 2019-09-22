/*
*Problem Description
*There are another kind of Fibonacci numbers: F(0) = 7, F(1) = 11, F(n) = F(n-1) + F(n-2) (n&gt;=2).<br>
* 
*
*Input
*Input consists of a sequence of lines, each containing an integer n. (n < 1,000,000).<br>
* 
*
*Output
*Print the word "yes" if 3 divide evenly into F(n).<br><br>Print the word "no" if not.<br>
* 
*
*Sample Input
*0
*1
*2
*3
*4
*5
* 
*
*Sample Output
*no
*no
*yes
*no
*no
*no
*/

/***************************************法1***************************************/
#include <iostream>
using namespace std;
int main()
{
    int sequence[8], n; //找规律
    sequence[0] = 7 % 3;
    sequence[1] = 11 % 3;
    for (int i = 2; i < 8; i++)
    {
        sequence[i] = (sequence[i - 1] + sequence[i - 2]) % 3; //(a + b) % p = (a % p + b % p) % p
    }
    while (cin >> n)
    {
        if (sequence[n % 8] == 0)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
}

/***************************************法2***************************************/
#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n%4==2)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
 
}
