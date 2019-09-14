//http://acm.hdu.edu.cn/webcontest/contest_showproblem.php?pid=1003&ojid=0&cid=13360&hide=0

#include <iostream>
using namespace std;

int gbs(int n1, int n2) //①辗转相除法；②参数无大小排序要求，若n2大，只是多做一次取余；
{
    int temp, da = n1, xiao = n2;
    while (xiao != 0)
    {
        temp = da % xiao;
        da = xiao;
        xiao = temp;
    }
    return (n1 / da * n2);
}

int main()
{
    int n1, n2;
    while (cin >> n1 >> n2)
    {
        cout << gbs(n1, n2) << endl;
    }
}
