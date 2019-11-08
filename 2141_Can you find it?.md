>### Problem Description<br>
>Give you three sequences of numbers A, B, C, then we give you a number X. Now you need to calculate if you can find the three numbers Ai, Bj, Ck, which satisfy the formula Ai+Bj+Ck = X.<br>
> <br>
>### Input<br>
>There are many cases. Every data case is described as followed: In the first line there are three integers L, N, M, in the second line there are L integers represent the sequence A, in the third line there are N integers represent the sequences B, in the forth line there are M integers represent the sequence C. In the fifth line there is an integer S represents there are S integers X to be calculated. 1<=L, N, M<=500, 1<=S<=1000. all the integers are 32-integers.<br>
> <br>
>### Output<br>
>For each case, firstly you have to print the case number as the form "Case d:", then for the S queries, you calculate if the formula can be satisfied or not. If satisfied, you print "YES", otherwise print "NO".<br>
> <br>
>### Sample Input<br>
>3 3 3<br>
>1 2 3<br>
>1 2 3<br>
>1 2 3<br>
>3<br>
>1<br>
>4<br>
>10<br>
> <br>
>### Sample Output<br>
>Case 1:<br>
>NO<br>
>YES<br>
>NO<br>

```cpp
#include <iostream>
#include <algorithm>
using namespace std;

bool find(int sum[], int n[], int num, int m, int d)
{
    int max, min, middle;
    for (int i = 0; i < m; i++)
    {
        max = num - 1;
        min = 0;
        while (max >= min) //大于等于
        {
            middle = (max + min) >> 1;
            if (sum[middle] + n[i] == d)
            {
                return true;
            }
            else if (sum[middle] + n[i] > d)
            {
                max = middle - 1;
            }
            else
            {
                min = middle + 1;
            }
        }
    }
    return false;
}

int main()
{
    int count = 0, l, n, m, d, L[500], N[500], M[500], sum[250000], n_test, num; //num 等于L*N
    while (cin >> l >> n >> m)
    {
        num = 0;
        for (int i = 0; i < l; i++)
        {
            cin >> L[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> N[i];
            for (int j = 0; j < l; j++)
            {
                sum[num++] = N[i] + L[j];
            }
        }
        sort(sum, sum + num);
        for (int i = 0; i < m; i++)
        {
            cin >> M[i];
        }
        sort(M, M + m);
        cout << "Case " << ++count << ":\n";
        cin >> n_test;
        while (n_test--)
        {
            cin >> d;
            if (!find(sum, M, num, m, d))
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES\n";
            }
        }
    }
}
```
