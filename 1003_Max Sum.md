>### Problem Description<br>
>Given a sequence a[1],a[2],a[3]......a[n], your job is to calculate the max sum of a sub-sequence.<br> 
>For example, given (6,-1,5,4,-7), the max sum in this sequence is 6 + (-1) + 5 + 4 = 14.<br>
> <br>
>### Input<br>
>The first line of the input contains an integer T(1<=T<=20) which means the number of test cases.<br>
>Then T lines follow, each line starts with a number N(1<=N<=100000), then N integers followed<br>
>(all the integers are between -1000 and 1000).<br>
> <br>
>### Output<br>
>For each test case, you should output two lines. The first line is "Case #:", # means the number <br>
>of the test case. The second line contains three integers, the Max Sum in the sequence, the start <br>
>position of the sub-sequence, the end position of the sub-sequence. If there are more than one result,<br> 
>output the first one. Output a blank line between two cases.<br>
> <br>
>### Sample Input<br>
>2<br>
>5 6 -1 5 4 -7<br>
>7 0 6 -1 1 -6 7 -5<br>
> <br>
>### Sample Output<br>
>Case 1:<br>
>14 1 4<br>
><br>
>Case 2:<br>
>7 1 6<br>
```cpp
#include <iostream>
using namespace std;

int main()
{
    int N, m, n[100001], x, y, sum, maxsum, k;
    while (cin >> N)
    {
        for (int i = 0; i < N; i++)
        {
            cin >> m;
            for (int j = 0; j < m; j++)
            {
                cin >> n[j];
            }
            k = 0;
            sum = 0;
            maxsum = -1000;
            for (int z = 0; z < m; z++)
            {
                sum += n[z];
                if (maxsum < sum)
                {
                    maxsum = sum;
                    x = k;
                    y = z;
                }
                if (sum < 0)
                {
                    k = z + 1;
                    sum = 0;
                }
            }
            cout << "Case " << i + 1 << ":\n"
                 << maxsum << " " << x + 1 << " " << y + 1 << endl;
            if (i != N-1)
            {
                cout << endl;
            }
        }
    }
    return 0;
}
```
