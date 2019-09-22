/*
*Problem Description
*FatMouse prepared M pounds of cat food, ready to trade with the cats guarding the warehouse containing his favorite food, JavaBean.
*The warehouse has N rooms. The i-th room contains J[i] pounds of JavaBeans and requires F[i] pounds of cat food. FatMouse does not have to trade for all the JavaBeans in the room, instead, he may get J[i]* a% pounds of JavaBeans if he pays F[i]* a% pounds of cat food. Here a is a real number. Now he is assigning this homework to you: tell him the maximum amount of JavaBeans he can obtain.
*
*Input
*The input consists of multiple test cases. Each test case begins with a line containing two non-negative integers M and N. Then N lines follow, each contains two non-negative integers J[i] and F[i] respectively. The last test case is followed by two -1's. All integers are not greater than 1000.
* 
*Output
*For each test case, print in a single line a real number accurate up to 3 decimal places, which is the maximum amount of JavaBeans that FatMouse can obtain.
* 
*Sample Input
*5 3
*7 2
*4 3
*5 2
*20 3
*25 18
*24 15
*15 10
*-1 -1
* 
*Sample Output
*13.333
*31.500
*/

#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

typedef struct
{
    double javaBeans;
    double catFood;
    double javaBeans_per_catFood;
} A; //结构类型名，不是结构变量。

int main()
{
    A a[1010];
    int M, N, i;
    double all;
    while (cin >> M >> N && (M != -1 || N != -1))
    {
        all = 0;
        for (i = 0; i < N; i++)
        {
            cin >> a[i].javaBeans >> a[i].catFood;
            a[i].javaBeans_per_catFood = double(a[i].javaBeans) / a[i].catFood;
        }
        sort(a, a + N, [](A a1, A a2) { return a1.javaBeans_per_catFood > a2.javaBeans_per_catFood; });
        i = 0;
        while (M && i < N)
        {
            if (M >= a[i].catFood)
            {
                all += a[i].javaBeans;
                M -= a[i].catFood;
                ++i;
            }
            else
            {
                all += a[i].javaBeans_per_catFood * M;
                M = 0;
                ++i;
            }
        }
        cout << setiosflags(ios::fixed) << setprecision(2) << all << endl;
        // cout << fixed << setprecision(3) << all << endl;
    }
}
