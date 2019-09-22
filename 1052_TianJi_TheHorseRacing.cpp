/*http://acm.hdu.edu.cn/showproblem.php?pid=1052
*Problem Description
*Here is a famous story in Chinese history.
*"That was about 2300 years ago. General Tian Ji was a high official in the country Qi. He likes to play horse racing with the king and others."
*"Both of Tian and the king have three horses in different classes, namely, regular, plus, and super. The rule is to have three rounds in a match; each of the horses must be used in one round. The winner of a single round takes two hundred silver dollars from the loser."
*"Being the most powerful man in the country, the king has so nice horses that in each class his horse is better than Tian's. As a result, each time the king takes six hundred silver dollars from Tian."
*"Tian Ji was not happy about that, until he met Sun Bin, one of the most famous generals in Chinese history. Using a little trick due to Sun, Tian Ji brought home two hundred silver dollars and such a grace in the next match."
*"It was a rather simple trick. Using his regular class horse race against the super class from the king, they will certainly lose that round. But then his plus beat the king's regular, and his super beat the king's plus. What a simple trick. And how do you think of Tian Ji, the high ranked official in China?"
*Were Tian Ji lives in nowadays, he will certainly laugh at himself. Even more, were he sitting in the ACM contest right now, he may discover that the horse racing problem can be simply viewed as finding the maximum matching in a bipartite graph. Draw Tian's horses on one side, and the king's horses on the other. Whenever one of Tian's horses can beat one from the king, we draw an edge between them, meaning we wish to establish this pair. Then, the problem of winning as many rounds as possible is just to find the maximum matching in this graph. If there are ties, the problem becomes more complicated, he needs to assign weights 0, 1, or -1 to all the possible edges, and find a maximum weighted perfect matching...
*However, the horse racing problem is a very special case of bipartite matching. The graph is decided by the speed of the horses --- a vertex of higher speed always beat a vertex of lower speed. In this case, the weighted bipartite matching algorithm is a too advanced tool to deal with the problem.
*In this problem, you are asked to write a program to solve this special case of matching problem.
* 
*Input
*The input consists of up to 50 test cases. Each case starts with a positive integer n (n <= 1000) on the first line, which is the number of horses on each side. The next n integers on the second line are the speeds of Tian’s horses. Then the next n integers on the third line are the speeds of the king’s horses. The input ends with a line that has a single 0 after the last test case.
* 
*Output
*For each input case, output a line containing a single number, which is the maximum money Tian Ji will get, in silver dollars.
* 
*Sample Input
*3
*92 83 71
*95 87 74
*2
*20 20
*20 20
*2
*20 19
*22 18
*0
* 
*Sample Output
*200
*0
*0
*/ 

#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
    int n, t[1000], k[1000], money;
    while (cin >> n && n != 0)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> t[i];
        }
        for (int j = 0; j < n; j++)
        {
            cin >> k[j];
        }
        sort(t, t + n, [](int n1, int n2) { return n1 < n2; });
        sort(k, k + n, [](int n1, int n2) { return n1 < n2; });
        money = 0;
        int tl = 0, th = n - 1, kl = 0, kh = n - 1;
        while (tl <= th && kl <= kh)
        {
            if (t[tl] > k[kl]) //田忌最慢的马比齐王最慢的马快，则田忌胜
            {
                money++;
                tl++;
                kl++;
            }
            else if (t[tl] == k[kl]) //田忌最慢的马与齐王最慢的马一样快
            {
                if (t[th] > k[kh]) //田忌最快的马比齐王最快的马快，田忌胜利
                {
                    money++;
                    th--;
                    kh--;
                }
                else if (t[th] == k[kh]) //田忌最快的马与齐王最快的马一样快
                {
                    if (t[tl] < k[kh]) //田忌最慢的马与齐王最快的马慢
                    {
                        money--;
                        tl++;
                        kh--;
                    }
                    else if (t[tl] == k[kh]) //田忌最慢的马与齐王最快的马一样快
                        break;
                }
                else //田忌最快的马与齐王最快的马慢
                {
                    money--;
                    tl++;
                    kh--;
                }
            }
            else //田忌最慢的马比齐王最慢的马慢，则田忌输
            {
                {
                    money--;
                    tl++;
                    kh--;
                }
            }
        }
        cout << money * 200 << endl;
    }
}
