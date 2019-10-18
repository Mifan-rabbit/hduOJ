<br>>### Problem Description<br>
>A subsequence of a given sequence is the given sequence with some elements (possible none) <br>
>left out. Given a sequence X = <x1, x2, ..., xm> another sequence Z = <z1, z2, ..., zk> is a<br>
>subsequence of X if there exists a strictly increasing sequence <i1, i2, ..., ik> of indices <br>
>of X = <a, b, c, f, b, c> with index sequence <1, 2, 4, 6>. Given two sequences X and Y the <br>
>problem is to find the length of the maximum-length common subsequence of X and Y.The program<br>
>input is from a text file. Each data set in the file contains two strings representing the<br>
>given sequences. The sequences are separated by any number of white spaces. The input data <br>
>are correct. For each set of data the program prints on the standard output the length of <br>
>the maximum-length common subsequence from the beginning of a separate line.<br>
> <br>
>### Sample Input<br>
>abcfbc abfcab<br>
>programming contest <br>
>abcd mnp<br>
><br>
>### Sample Output<br>
>4<br>
>2<br>
>0<br>

```cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1, s2;
    int dp[1000][1000];
    while (cin >> s1 >> s2)
    {
        int x = 0;
        for (int i = 0; i < s1.length(); i++)
        {
            if (s1[i] == s2[0])
            {
                x = 1;
            }
            dp[i][0] = x;
        }
        x = 0;
        for (int i = 0; i < s2.length(); i++)
        {
            if (s1[0] == s2[i])
            {
                x = 1;
            }
            dp[0][i] = x;
        }
        for (int i = 1; i < s1.length(); i++)
        {
            for (int j = 1; j < s2.length(); j++)
            {
                if (s1[i] == s2[j])
                {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                }
                else
                {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        cout << dp[s1.length() - 1][s2.length() - 1] << endl;
    }
    return 0;
}

```
