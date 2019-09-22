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
