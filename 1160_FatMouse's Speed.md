>Problem Description<br>
>FatMouse believes that the fatter a mouse is, the faster it runs. To disprove this, you want to take <br>
>the data on a collection of mice and put as large a subset of this data as possible into a sequence <br>
>so that the weights are increasing, but the speeds are decreasing.<br>
> <br>
>Input<br>
>Input contains data for a bunch of mice, one mouse per line, terminated by end of file.<br>
><br>
>The data for a particular mouse will consist of a pair of integers: the first representing <br>
>its size in grams and the second representing its speed in centimeters per second. Both integers <br>
>are between 1 and 10000. The data in each test case will contain information for at most 1000 mice.<br>
>Two mice may have the same weight, the same speed, or even the same weight and speed.<br>
> <br>
>Output<br>
>Your program should output a sequence of lines of data; the first line should contain a number n; <br>
>the remaining n lines should each contain a single positive integer (each one representing a mouse).<br>
>If these n integers are m[1], m[2],..., m[n] then it must be the case that<br>
><br>
>W[m[1]] < W[m[2]] < ... < W[m[n]]<br>
><br>
>and<br>
><br>
>S[m[1]] > S[m[2]] > ... > S[m[n]]<br>
><br>
>In order for the answer to be correct, n should be as large as possible.<br>
>All inequalities are strict: weights must be strictly increasing, and speeds must be strictly <br>
>decreasing. There may be many correct outputs for a given input, your program only needs to find one.<br>
> <br>
>Sample Input<br>
>6008 1300<br>
>6000 2100<br>
>500 2000<br>
>1000 4000<br>
>1100 3000<br>
>6000 2000<br>
>8000 1400<br>
>6000 1200<br>
>2000 1900<br>
> <br>
>Sample Output<br>
>4<br>
>4<br>
>5<br>
>9<br>
>7<br>

```cpp
#include <iostream>
#include <algorithm>
using namespace std;

struct mouse
{
    int id;
    int w;
    int s;
    int former;
    int all_num;
} m[1001];

int main()
{
    int size = 0, result[1001], max = 0, maxx;
    while (cin >> m[size].w >> m[size].s)
    {
        m[size].id = size + 1;
        ++size;
    }
    sort(m, m + size, [](mouse a, mouse b) { if(a.w==b.w)return a.s > b.s; else return a.w<b.w; });
    for (int i = 0; i < size; i++)
    {
        m[i].former = -1; //最长序列时的前一位
        m[i].all_num = 0;
        for (int j = i - 1; j >= 0; j--)
        {
            if (m[i].all_num < m[j].all_num && m[i].s < m[j].s && m[i].w > m[j].w)
            {
                m[i].all_num = m[j].all_num;
                m[i].former = j;
            }
        }
        m[i].all_num++;
        if (max < m[i].all_num)
        {
            max = m[i].all_num;
            maxx = i;
        }
    }

    cout << max << endl;
    for (int j = 0; j < max; j++)
    {
        result[j] = m[maxx].id;
        maxx = m[maxx].former;
    }
    for (int j = max - 1; j >= 0; j--)
    {
        cout << result[j] << endl;
    }
    return 0;
}
```
