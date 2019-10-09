# hduOJ
goodluck
--------

## 第一周 简单的数学题

### [1019_](http://acm.hdu.edu.cn/showproblem.php?pid=1019)[LeastCommonMultiple](https://github.com/Mifan-rabbit/hduOJ/blob/master/1019_LeastCommonMultiple.cpp)
* `辗转相除法`求最大公因数
* 先除后乘防止数据太大而溢出

### [1005_](http://acm.hdu.edu.cn/showproblem.php?pid=1005)[NumberSequence](https://github.com/Mifan-rabbit/hduOJ/blob/master/1005_NumberSequence.cpp)
* `快速矩阵幂`
* 也可以找规律，a、b共49种可能

### [1021_](http://acm.hdu.edu.cn/showproblem.php?pid=1021)[FibonacciAgain](https://github.com/Mifan-rabbit/hduOJ/blob/master/1021_FibonacciAgain.cpp)
* 找规律

### [2035_](http://acm.hdu.edu.cn/showproblem.php?pid=2035)[MyPowAB](https://github.com/Mifan-rabbit/hduOJ/blob/master/2035_MyPowAB.cpp)
* `快速幂`（tip:转二进制）
* 右移（>>）比除二更快

### [1061_](http://acm.hdu.edu.cn/showproblem.php?pid=1061)[Rightmost](https://github.com/Mifan-rabbit/hduOJ/blob/master/1061_Rightmost.cpp)
* 找规律
  
## 第二周 贪心算法

### [1009_](http://acm.hdu.edu.cn/showproblem.php?pid=1009)[FatMouseTrade](https://github.com/Mifan-rabbit/hduOJ/blob/master/1009_FatMouseTrade.cpp)

* 初用`sort`
    
### [1050_](http://acm.hdu.edu.cn/showproblem.php?pid=1050)[MovingTables](https://github.com/Mifan-rabbit/hduOJ/blob/master/1050_MovingTables.cpp)

* 刷油漆的方法标记搬桌子过程中要经过的走廊，需要的次数即为最高刷漆次数
    
### [1789_](http://acm.hdu.edu.cn/showproblem.php?pid=1789)[DoingHomeworkagain](https://github.com/Mifan-rabbit/hduOJ/blob/master/1789_DoingHomeworkagain.cpp)

* 思路：用数组记录已经用于写分更高的作业的日子；
* 初用`memset()`，函数有三个参数:
  * 第一个参数为首地址;
  * 第二个参数为0或者-1或者单个字符(注意用单引号);
  * 第三个参数为改变的数组大小（或者称为长 度);include<cstring>;
  
### [2037_](http://acm.hdu.edu.cn/showproblem.php?pid=2037)[ac](https://github.com/Mifan-rabbit/hduOJ/blob/master/2037_ac.cpp)

* 思路：越早结束则可以看更多的节目
      
### [1052_](http://acm.hdu.edu.cn/showproblem.php?pid=1052)[TianJi_TheHorseRacing](https://github.com/Mifan-rabbit/hduOJ/blob/master/1052_TianJi_TheHorseRacing.cpp)
* 当田忌最弱的马比齐王的马弱，则拿田忌最弱的马和齐王最强的马比，反正它一定会输，就拿它消耗最强的；
* 当田忌最弱的马比齐王最弱的马强，则拿田忌最弱的马和齐王最弱的马比；
* 当田忌最弱的马和齐王最弱的马一样时：
  * 若田忌最强的马比齐王最强的马弱，则拿田忌最弱的马和齐王最强的马比；
  * 若田忌最强的马比齐王最强的马强，则拿田忌最强的马和齐王最强的马比；
  * 若田忌最强的马强和齐王最强的马一样：
    * 若田忌最弱的马强和齐王最强的马一样，则剩下的马比赛一定平局；
    * 若田忌最弱的马比齐王最强的马弱，则拿田忌最弱的马和齐王最强的马比；

### [Frogs_](http://acm.hdu.edu.cn/webcontest/contest_showproblem.php?pid=1010&ojid=1&cid=13365&hide=1&problem=Problem%20%20J)[Neighborhood](https://github.com/Mifan-rabbit/hduOJ/blob/master/FrogsNeighborhood.md)
* `Havel-Hakimi定理`<br>
由非负整数组成的非增序列S：d1, d2, ..., dn(n≥2, d1≥1) 是可图的，<br>
当且仅当序列S1：d2 - 1, d3 - 1, ..., dd1 + 1 - 1, dd1 + 2, ..., dn是可图的。<br>
其中，序列S1中有n - 1个非负整数，S序列中d1后的前d1个度数(即d2 ~dd1 + 1) 减1后构成S1中的前d1个数。<br>

## 第三周 递推求解
### [2041_](http://acm.hdu.edu.cn/showproblem.php?pid=2041)[Super stairs](https://github.com/Mifan-rabbit/hduOJ/blob/master/2041_SuperStairs.cpp)
* 在前面走法正确的情况下，最后连走一步或两步，故：f(n) = f(n-1) + f(n-2)

### [2045_](http://acm.hdu.edu.cn/showproblem.php?pid=2045)[RPG](https://github.com/Mifan-rabbit/hduOJ/blob/master/2045_RPG.md)
* 若前n-1位组成的串合法，则由于首尾不同，再添加一位时，只有1种方法；
* 若前n-1位组成的串不合法,则由于首尾相同，再添加一位时，共有2种方法；
* 故：s(n) = s(n-1)+2*s(n-2)

### [2050_](http://acm.hdu.edu.cn/showproblem.php?pid=2050)[Broken Line](https://github.com/Mifan-rabbit/hduOJ/blob/master/2050_BrokenLine.md)
* 直线切割平面，第n条直线与n-1条直线相交，产生n-1个结点，增加n个区域；
* 折线切割平面:
  * 第n条折线分为第2n条和第2n-1条平行直线，分别于2n-2条直线相交，产生2n-2个结点，分别增加2n-1个区域；
  * 折线有顶点，两平行线相交于一个端点，使得减少一个区域；
* 故：s(n)=s(n-1)+2*(2n-1)-1

### [2190_](http://acm.hdu.edu.cn/showproblem.php?pid=2190)[classroom](https://github.com/Mifan-rabbit/hduOJ/blob/master/2190_classroom.md)
* 降维，建立1\*3【*1种*】 和 2\*3【*2种，减去完全用1\*1方块铺的*】的基础块;
* 若前 n-1 米已经铺好，则在最后加一块 1\*3 的基础块，即 f(n)=f(n-1);
* 若前 n-2 米已经铺好，则在最后加一块 2\*3 的基础块， 即f(n)= 2\*f(n-2);
* 故 f(n) = f(n-1) + 2\*f(n-2)

### [1134_](http://acm.hdu.edu.cn/showproblem.php?pid=1134)[Game of Connections](https://github.com/Mifan-rabbit/hduOJ/blob/master/1134_GameofConnections.md)
* 初遇`卡特兰数`

### [2536_](http://acm.hdu.edu.cn/showproblem.php?pid=2563)[statistics](https://github.com/Mifan-rabbit/hduOJ/blob/master/2536_statistics.md)
* 第n步可以与第n-1步同向；也可以向上；
* 若第n-1步向上，第n步有↑、←、→三种选择；
* 故：f(n)=2f(n-1)+f(n-2)；

## 第四周 动态规划
### [2084_](http://acm.hdu.edu.cn/showproblem.php?pid=2084)[数塔](https://github.com/Mifan-rabbit/hduOJ/blob/master/2084_%E6%95%B0%E5%A1%94.md)
* 自顶向下的分析，自底向上的计算
