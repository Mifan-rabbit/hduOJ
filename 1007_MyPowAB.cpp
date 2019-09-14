/*
*用快速幂解题
*
*Problem Description
*求A^B的最后三位数表示的整数。<br>说明：A^B的含义是“A的B次方”<br>
* 
*
*Input
*输入数据包含多个测试实例，每个实例占一行，由两个正整数A和B组成（1<=A,B<=10000），如果A=0, B=0，则表示输入数据的结束，不做处理。
* 
*
*Output
*对于每个测试实例，请输出A^B的最后三位表示的整数，每个输出占一行。<br>
* 
*
*Sample Input
*2 3
*12 6
*6789 10000
*0 0
* 
*
*Sample Output
*8
*984
*1
*/ 

#include <iostream>
using namespace std;
int main()
{
    int a, b, t, c = 1000, A;
    while (cin >> a >> b && (a != 0 || b != 0))
    {
        A = 1;
        t = a % c;
        while (b != 0)
        {
            if (b & 1)
            {
                A = (A * t) % c;
            }
            b >>= 1;
            t = (t * t) % c;
        }
        cout << A << endl;
    }
}
