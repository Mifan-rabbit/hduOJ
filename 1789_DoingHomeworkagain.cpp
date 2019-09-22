/*http://acm.hdu.edu.cn/showproblem.php?pid=1789
*Problem Description
*Ignatius has just come back school from the 30th ACM/ICPC. Now he has a lot of homework to do. Every teacher gives him a deadline of handing in the homework. If Ignatius hands in the homework after the deadline, the teacher will reduce his score of the final test. And now we assume that doing everyone homework always takes one day. So Ignatius wants you to help him to arrange the order of doing homework to minimize the reduced score.
* 
*Input
*The input contains several test cases. The first line of the input is a single integer T that is the number of test cases. T test cases follow.
*Each test case start with a positive integer N(1<=N<=1000) which indicate the number of homework.. Then 2 lines follow. The first line contains N integers that indicate the deadlines of the subjects, and the next line contains N integers that indicate the reduced scores.
* 
*Output
*For each test case, you should output the smallest total reduced score, one line per test case.
* 
*Sample Input
*3
*3
*3 3 3
*10 5 1
*3
*1 3 1
*6 2 3
*7
*1 4 6 4 2 4 3
*3 2 1 7 6 5 4
* 
*Sample Output
*0
*3
*5
*/

#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
typedef struct
{
    int ddl;
    int score;
} homework;
homework h[1005];
int day[1005];
bool compare(homework h1, homework h2)
{
    if (h1.score != h2.score)
        return h1.score > h2.score;
    else
        return h1.ddl < h2.ddl;
}

int main()
{
    int j, n, m, finalScore;
    cin >> n;
    while (n--)
    {
        finalScore = 0;
        cin >> m;
        memset(day, 0, sizeof(bool) * 1005);
        //memset()函数有三个参数:第一个参数为首地址;第二个参数为0或者-1或者单个字符（注意用单引号）;第三个参数为改变的数组大小（或者称为长度);include<cstring>
        for (int i = 0; i < m; i++)
        {
            cin >> h[i].ddl;
        }
        for (int i = 0; i < m; i++)
        {
            cin >> h[i].score;
        }
        sort(h, h + m, compare);
        bool flag;
        for (int i = 0; i < m; i++)
        {
            flag = false;
            for (j = h[i].ddl; j > 0; j--)
            {
                if (day[j] == 0)
                {
                    day[j] = 1;
                    flag = true;
                    break;
                }
            }
            if (!flag)
            {
                finalScore += h[i].score;
            }
        }
        cout << finalScore << endl;
    }
}
