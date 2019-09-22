/*
*Problem Description
*The least common multiple (LCM) of a set of positive integers is the smallest positive integer which is divisible by all the numbers in the set. For example, the LCM of 5, 7 and 15 is 105.<br><br>
* 
*
*Input
*Input will consist of multiple problem instances. The first line of the input will contain a single integer indicating the number of problem instances. Each instance will consist of a single line of the form m n1 n2 n3 ... nm where m is the number of integers in the set and n1 ... nm are the integers. All integers will be positive and lie within the range of a 32-bit integer.<br>
* 
*
*Output
*For each problem instance, output a single line containing the corresponding LCM. All results will lie in the range of a 32-bit integer.<br>
* 
*
*Sample Input
*2
*3 5 7 15
*6 4 10296 936 1287 792 1
*/ 

Sample Output
105
10296

#include <iostream>
using namespace std;

int gbs(int n1, int n2)     //①辗转相除法；②参数无大小排序要求，若n2大，只是多做一次取余；
{
    int temp, da = n1, xiao = n2;
    while (xiao != 0)
    {
        temp = da % xiao;
        da = xiao;
        xiao = temp;
    }
    return (n1 / da * n2);      //先除后乘防止溢出
}

int main()
{
    int n1, n2;
    while (cin >> n1 >> n2)
    {
        cout << gbs(n1, n2) << endl;
    }
}
