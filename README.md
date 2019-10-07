# hduOJ
goodluck
--------

## 第一周 简单的数学题

### [1019_LeastCommonMultiple](http://acm.hdu.edu.cn/showproblem.php?pid=1019)
* `辗转相除法`求最大公因数
* 先除后乘防止数据太大而溢出

### [1005_NumberSequence](http://acm.hdu.edu.cn/showproblem.php?pid=1005)	
* `快速矩阵幂`
* 也可以找规律，a、b共49种可能

### [1021_FibonacciAgain](http://acm.hdu.edu.cn/showproblem.php?pid=1021)
* 找规律

### [2035_MyPowAB](http://acm.hdu.edu.cn/showproblem.php?pid=2035)
* `快速幂`（tip:转二进制）
* 右移（>>）比除二更快

### [1061_Rightmost](http://acm.hdu.edu.cn/showproblem.php?pid=1061)
* 找规律
  
## 第二周 贪心算法

### [1009_FatMouseTrade](http://acm.hdu.edu.cn/showproblem.php?pid=1009)

* 初用`sort`
    
### [1050_MovingTables](http://acm.hdu.edu.cn/showproblem.php?pid=1050) 

* 刷油漆的方法标记搬桌子过程中要经过的走廊，需要的次数即为最高刷漆次数
    
### [1789_DoingHomeworkagain](http://acm.hdu.edu.cn/showproblem.php?pid=1789) 

* 思路：用数组记录已经用于写分更高的作业的日子；
* 初用`memset()`，函数有三个参数:
  * 第一个参数为首地址;
  * 第二个参数为0或者-1或者单个字符(注意用单引号);
  * 第三个参数为改变的数组大小（或者称为长 度);include<cstring>;
  
### [2037_ac](http://acm.hdu.edu.cn/showproblem.php?pid=2037)

* 思路：越早结束则可以看更多的节目
      
### [1052_TianJi_TheHorseRacing](http://acm.hdu.edu.cn/showproblem.php?pid=1052)
* 当田忌最弱的马比齐王的马弱，则拿田忌最弱的马和齐王最强的马比，反正它一定会输，就拿它消耗最强的；
* 当田忌最弱的马比齐王最弱的马强，则拿田忌最弱的马和齐王最弱的马比；
* 当田忌最弱的马和齐王最弱的马一样时：
  * 若田忌最强的马比齐王最强的马弱，则拿田忌最弱的马和齐王最强的马比；
  * 若田忌最强的马比齐王最强的马强，则拿田忌最强的马和齐王最强的马比；
  * 若田忌最强的马强和齐王最强的马一样：
    * 若田忌最弱的马强和齐王最强的马一样，则剩下的马比赛一定平局；
    * 若田忌最弱的马比齐王最强的马弱，则拿田忌最弱的马和齐王最强的马比；

### [FrogsNeighborhood](http://acm.hdu.edu.cn/webcontest/contest_showproblem.php?pid=1010&ojid=1&cid=13365&hide=1&problem=Problem%20%20J)
* `Havel-Hakimi定理`<br>
由非负整数组成的非增序列S：d1, d2, ..., dn(n≥2, d1≥1) 是可图的，<br>
当且仅当序列S1：d2 - 1, d3 - 1, ..., dd1 + 1 - 1, dd1 + 2, ..., dn是可图的。<br>
其中，序列S1中有n - 1个非负整数，S序列中d1后的前d1个度数(即d2 ~dd1 + 1) 减1后构成S1中的前d1个数。<br>

## 第四周 递推求解
### [2041_TianJi_TheHorseRacing](http://acm.hdu.edu.cn/showproblem.php?pid=2041)
* 在前面走法正确的情况下，最后连走一步或两步，故：f(n) = f(n-1) + f(n-2)


