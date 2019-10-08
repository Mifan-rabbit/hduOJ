>### Problem Description<br>
>这是一个小而古老的游戏。您应该在地面上按顺时针顺序连续写下数字1，2，3，...，2n-1，2n以形成一个圆，<br>
>然后画一些直线段以将它们连接成数字对。每个数字都必须彼此精确连接。并且，不允许两个线段相交。<br>
>它仍然是一个简单的游戏，不是吗？但是，在写下2n个数字之后，您能以几种不同的方式告诉我如何将数字成对连接吗？<br>
>生活更艰难吧？<br>
>### Input<br>
>输入文件的每一行将是单个正数n，最后一行除外，即数字-1。您可以假设1 <= n <= 100。<br>
>### Output<br>
>对于每个n，在一行中打印将2n个数字成对连接的方式的数目。<br>
>### Sample Input<br>
>2<br>
>3<br>
>-1<br>
>### Sample Output<br>
>2<br>
>5<br>

```cpp
#include<iostream>  
#include<cstdio>  
using namespace std;  
int a[101][101];  
int b[101];  
void catalan()  
{  
    int i,j,x,len;  
    a[1][0]=b[1]=len=1;  
    for(i=2;i<101;i++)  
    {  
        for(j=0,x=0;j<len;j++)  //乘法
        {  
            a[i][j]=a[i-1][j]*(4*i-2)+x;  //处理相乘的结果
            x=a[i][j]/10;  
            a[i][j]%=10;  
        }  
        while(x>0)  //进位
        {  
            a[i][len++]=x%10;  
            x/=10;  
        }  
        for(j=len-1,x=0;j>=0;j--)    //除法
        {  
            a[i][j]=a[i][j]+10*x;  
            x=a[i][j]%(i+1);  
            a[i][j]/=(i+1);  
        }  
        while(a[i][len-1]==0&&len>0) len--;  
        b[i]=len;  
    }  
}  
int main()  
{  
    int n;  
    while(scanf("%d",&n)!=EOF&&n!=-1)  
    {  
        catalan();  
        for(int i=b[n]-1;i>=0;i--)  
        {  
            printf("%d",a[n][i]);  
        }  
        printf("\n");  
    }  
    return 0;  
} 
```
