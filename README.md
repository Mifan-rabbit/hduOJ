# hduOJ
goodluck
--------

## 第一周 简单的数学题

### [1019_](http://acm.hdu.edu.cn/showproblem.php?pid=1019)[LeastCommonMultiple](https://github.com/Mifan-rabbit/hduOJ/blob/master/1019_LeastCommonMultiple.cpp)
* `辗转相除法`求最大公因数
  + 大数 % 小数 = 余数
  + 大数 = 小数， 小数 = 余数
  + 循环上面两步， 直到余数（已经赋给小数）为0
  + 最大公因数就是此时的大数
* 先除后乘防止数据太大而溢出

### [1005_](http://acm.hdu.edu.cn/showproblem.php?pid=1005)[NumberSequence](https://github.com/Mifan-rabbit/hduOJ/blob/master/1005_NumberSequence.cpp)
* `快速矩阵幂`
  + f(n)=Af(n-1)+Bf(n-2)
  + |f( n)|=|A B|×|f(n-1)|
  + |f(n-1)| |1 0| |f(n-2)|
* 也可以找规律，a、b共49种可能

### [1021_](http://acm.hdu.edu.cn/showproblem.php?pid=1021)[FibonacciAgain](https://github.com/Mifan-rabbit/hduOJ/blob/master/1021_FibonacciAgain.cpp)
* 找规律

### [2035_](http://acm.hdu.edu.cn/showproblem.php?pid=2035)[MyPowAB](https://github.com/Mifan-rabbit/hduOJ/blob/master/2035_MyPowAB.cpp)
* 只计算要求的那几位，忽略高位数
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

### [1176_](http://acm.hdu.edu.cn/showproblem.php?pid=1176)[免费馅饼](https://github.com/Mifan-rabbit/hduOJ/blob/master/1176_%E5%85%8D%E8%B4%B9%E9%A6%85%E9%A5%BC.md)
* 以坐标点为横轴，以时间点为纵轴，建立数塔（除边缘坐标，每个坐标点的值是下一行与其相邻的三个的最大值）

### [1087_](http://acm.hdu.edu.cn/showproblem.php?pid=1087)[Super Jumping! Jumping! Jumping!](https://github.com/Mifan-rabbit/hduOJ/blob/master/1087_Super%20Jumping.md)
* 计算每个格子最大增序子序列的和，第n个数的该值是其之前比它小的、最大增序子序列的和最大的数加本身

### [1421_](http://acm.hdu.edu.cn/showproblem.php?pid=1421)[搬寝室](https://github.com/Mifan-rabbit/hduOJ/blob/master/1421_%E6%90%AC%E5%AF%9D%E5%AE%A4.md)
* 平方可以用面积形象化表示，得出面积越小，体力消耗越小，则要求物体重量相邻：
  * (a-b)^2+(c-d)^2< (a-c)^2+(b-d)^2
  * (a-b)^2+(c-d)^2< (a-d)^2+(b-c)^2
* 建立f[i][j]数组，表示从i个物体中选j个；
* 有两种情况：
  * 包括第i个: f[i][j]=f[i-2][j-1]+(N[i]-N(i-1)) * (N[i]-N(i-1))
  * 不包括第i个: f[i][j]=f[i-1][j]
  
### [1058_](http://acm.hdu.edu.cn/showproblem.php?pid=1058)[Humble Numbers](https://github.com/Mifan-rabbit/hduOJ/blob/master/1058_Humble%20Numbers.md)
* 关于数字后缀：
  * 除了13，个位是3的数以rd结尾；
  * 除了12，个位是2的数以nd结尾；
  * 除了11，个位是1的数以st结尾；
  * 其它 以th结尾
* F(n)=min(F(i) * 2,F(j) * 3,F(k) * 5,F(m) * 7) (n>i,j,k,m) 特别的：i,j,k,m 只有在本项被选中后才移动
  * 1 ->2=min(1 * 2, 1 * 3, 1 * 5, 1 * 7)
  * 1 ->2 ->3=min(2 * 2, 1 * 3, 1 * 5, 1 * 7)
  * 1 ->2 ->3 -> 4 = min(2 * 2, 2 * 3, 1 * 5, 1 * 7)
  * 1 ->2 ->3 -> 4 ->5= min(3 * 2, 2 * 3, 1 * 5, 1 * 7)

### [1160_](http://acm.hdu.edu.cn/showproblem.php?pid=1160)[FatMouse's Speed](https://github.com/Mifan-rabbit/hduOJ/blob/master/1160_FatMouse's%20Speed.md)
* 固定其中一个数据元素，求另一个数据最长有序子列
* 记录每一个元素到该元素的最长有序子列 && 它最长有序子列的倒数第二个元素

### [1003_](http://acm.hdu.edu.cn/showproblem.php?pid=1003)[Max Sum](https://github.com/Mifan-rabbit/hduOJ/blob/master/1003_Max%20Sum.md)
* 用k记录起始位置，每当sum小于零时，则从下一位开始重新累加sum，k+=1;
* 当sum大于maxsum时，更新maxsum的值和起点的值；

### [4540_](http://acm.hdu.edu.cn/showproblem.php?pid=4540)[威威猫系列故事——打地鼠](https://github.com/Mifan-rabbit/hduOJ/blob/master/4540_%E5%A8%81%E5%A8%81%E7%8C%AB%E7%B3%BB%E5%88%97%E6%95%85%E4%BA%8B%E2%80%94%E2%80%94%E6%89%93%E5%9C%B0%E9%BC%A0.md)
* 状态转移方程：dp[i][j] = min(dp[i][j],dp[i+1][x]+abs(a[i][j]-a[i+1][x]))

### [1159_](http://acm.hdu.edu.cn/showproblem.php?pid=1159)[Common Subsequence](https://github.com/Mifan-rabbit/hduOJ/blob/master/1159_Common%20Subsequence.md)
* f(i-1,j-1)+1 (a[i]==b[j])
* max(f(i-1,j),f(i,j-1)) (a[i]!=b[j]) 
* 一直推到f(len(a),len(b))就得到所要求的解

## 第五周 背包
### [2606_](http://acm.hdu.edu.cn/showproblem.php?pid=2602)[Bone Collector](https://github.com/Mifan-rabbit/hduOJ/blob/master/2606_Bone%20Collector.md)
* 01背包：每种物品仅有一件，可以选择放或不放，用子问题定义状态：即f[i][v]表示前i件物品放入一个容量为v的背包可以获得的最大价值；
* 状态转移方程：f[i][v]=max{f[i-1][v],f[i-1][v-c[i]]+w[i]}；
* 可优化到一维：<br>
&emsp;for i = 1 to n  //所有物品<br>
&emsp;&emsp;   for j = V to v[i] //反向便利，防止由于覆盖导致一件物品被多次装入背包<br>
&emsp;&emsp;&emsp;        dp[j] = max(dp[j] , dp[j-v[i]] + w[i]);<br>

### [1114_](http://acm.hdu.edu.cn/showproblem.php?pid=1114)[Piggy-Bank](https://github.com/Mifan-rabbit/hduOJ/blob/master/1114_Piggy-Bank.md)
* 完全背包：一种物品可以取无数个；
* 问题目的：求该重量下最少的钱，背包容量为重量，价值为钱，越小越好，需先初始化为一个超大值；
* 和01背包类似,不过就是正着写；
* memset是按字节初始化，memset(a,1,sizeof(a))获得数组a的元素的值为-1，好奇怪哦；

### [2191_](http://acm.hdu.edu.cn/showproblem.php?pid=2191)[悼念512汶川大地震遇难同胞——珍惜现在，感恩生活](https://github.com/Mifan-rabbit/hduOJ/blob/master/2191_%E6%82%BC%E5%BF%B5%E6%B1%B6%E5%B7%9D%E5%A4%A7%E5%9C%B0%E9%9C%87.md)
* 多重背包：一种物品有C个；
* 可将一种有C个的物品拆分成1,2,4,...,2^(k-1),C-(2^k-1)：<br>
&emsp;int t = 1;<br>
&emsp;while (x>=t) {<br>
&emsp;&emsp;	v[cnt] = a*t;<br>
&emsp;&emsp;	c[cnt++] = b*t;<br>
&emsp;&emsp;	x -= t;<br>
&emsp;&emsp;	t <<= 1;<br>
&emsp;}<br>
&emsp;if (x) {<br>
&emsp;&emsp;	v[cnt] = a*x;<br>
&emsp;&emsp;	c[cnt++] = b*x;<br>
&emsp;}<br>
* 然后进行01背包

### [1171_](http://acm.hdu.edu.cn/showproblem.php?pid=1171)[Big Event in HDU](https://github.com/Mifan-rabbit/hduOJ/blob/master/1171_Big%20Event%20in%20HDU.md)
* 以机器价值为容量，以机器价值为背包价值，使其尽可能大

### [1248_](http://acm.hdu.edu.cn/showproblem.php?pid=1248)[寒冰王座](https://github.com/Mifan-rabbit/hduOJ/blob/master/1248_%E5%AF%92%E5%86%B0%E7%8E%8B%E5%BA%A7.md)
* 多重背包

### [1203_](http://acm.hdu.edu.cn/showproblem.php?pid=1203)[I NEED A OFFER!](https://github.com/Mifan-rabbit/hduOJ/blob/master/1203_I%20NEED%20A%20OFFER.md)
* 概率计算

### [2159_](http://acm.hdu.edu.cn/showproblem.php?pid=2159)[FATE](https://github.com/Mifan-rabbit/hduOJ/blob/master/2159_FATE.md)
* 二维费用背包：对于每件物品，具有两种不同的费用；选择这件物品必须同时付出这两种代价；对于每种代价都有一个可付出的最大值（比如，背包容量、最大承重），求怎样选择物品可以得到最大的价值。
* 费用加了一维，只需状态也加一维即可！状态转移方程则为：f[i][v][u]=max{f[i-1][v][u],f[i-1][v-a[i]][u-b[i]]+w[i]}
* 由于一类怪可以杀很多次，所以正着循环
* 用min记录最少的忍耐度消耗

## 第六周 bfs
### [1548_](http://acm.hdu.edu.cn/showproblem.php?pid=1548)[A strange lift](https://github.com/Mifan-rabbit/hduOJ/blob/master/1548_A%20strange%20lift.md)
* 到过的楼层做标记
* 考虑两个方向（上、下）

### [1242_](http://acm.hdu.edu.cn/showproblem.php?pid=1242)[Rescue](https://github.com/Mifan-rabbit/hduOJ/blob/master/1242_Rescue.md)
* 天使只有一个，但天使的朋友有很多，可以让天使去找朋友，结果就是找到第一个朋友所需要的时间
* 设置一个结构体，记录坐标和时间
* 天使一次只能走四个方向，写入数组，用for遍历
* 用next_p记录下一个位置信息，注意判断该位置是否可以走时坐标不能越界且未访问
* 用一个mark数组标记已经走过的路或发现的墙，防止死循环

### [1253_](http://acm.hdu.edu.cn/showproblem.php?pid=1253)[胜利大逃亡](https://github.com/Mifan-rabbit/hduOJ/blob/master/1253_%E8%83%9C%E5%88%A9%E5%A4%A7%E9%80%83%E4%BA%A1.md)
* 起点可以是墙，但终点如果是墙，就走不出去了
* 循环结束后，记得清空队列

### [1495](http://acm.hdu.edu.cn/showproblem.php?pid=1495)[非常可乐](https://github.com/Mifan-rabbit/hduOJ/blob/master/1495_%E9%9D%9E%E5%B8%B8%E5%8F%AF%E4%B9%90.md)
* 六种倒法，先在三个瓶子中选一个作为倒水瓶（大for循环），再从剩下两个瓶子中选一个作为接水瓶子（小for循环）
* 同样要记录出现过的情况，这里采用二维数组（因为第三瓶水量可以通过另外两瓶计算出），减少空间容量

### [1372_](http://acm.hdu.edu.cn/showproblem.php?pid=1372)[Knight Moves](https://github.com/Mifan-rabbit/hduOJ/blob/master/1372_Knight%20Moves.md)
* 骑士“日”字走，有八个方向


## 第七周&emsp;&emsp;二分查找、三分查找、dfs
### [2199_](http://acm.hdu.edu.cn/showproblem.php?pid=2199)[Can you solve this equation?](https://github.com/Mifan-rabbit/hduOJ/blob/master/2199_Can%20you%20solve%20this%20equation%3F.md)
* 二分查找：若值大于中值，最大值等于中值；若值小于中值，最小值等于中值
* 先剪枝：如果该值不在函数的最大值和最小值之间，就不进行二分查找；
* 能进行二分查找的一定是能找到对应的x,为了达到精度，退出条件为high - low > 1e-6，这样middle的第四位小数不在会有变化；

### [2899_](http://acm.hdu.edu.cn/showproblem.php?pid=2899)[Strange fuction](https://github.com/Mifan-rabbit/hduOJ/blob/master/2899_Strange%20fuction.md)
* 由于函数不是单调的，所以用三分查找：
  * 将范围分成三部分：
    * low__mlow__mhigh_high
    * 当f(mhigh)>f(mlow)，最小值在mhigh-low之间，使high=mhigh;
    * 当f(mhigh)<f(mlow)，最小值在mlow-high之间，使low=mlow;
    * 当f(mhigh)=f(mlow)，最小值在mlow-mhigh之间,使high=mhigh,low=mlow;
  * 跳出循环条件：high - low > 1e-6

### [1969_](http://acm.hdu.edu.cn/showproblem.php?pid=1969)[Pie](https://github.com/Mifan-rabbit/hduOJ/blob/master/1969_Pie.md)
* 二分查找法
* 最大的情况，不用分，每人一个蛋糕
* 求体积不要先乘PI，否则分的时候会降低精度

### [1905_](http://acm.hdu.edu.cn/showproblem.php?pid=1905)[Pseudoprime numbers](https://github.com/Mifan-rabbit/hduOJ/blob/master/1905_Pseudoprime%20numbers.md)
* 快速幂again

### [2648_](http://acm.hdu.edu.cn/showproblem.php?pid=2648)[Shopping](https://github.com/Mifan-rabbit/hduOJ/blob/master/2648_Shopping.md)
* 初用map（键值对）
  * map<string, int> myMap; //构造
  * myMap[key] = value; //插入
  * myMap.erase(myMap.begin(), myMap.end()); //清空

### [2141_](http://acm.hdu.edu.cn/showproblem.php?pid=2141)[Can you find it?](https://github.com/Mifan-rabbit/hduOJ/blob/master/2141_Can%20you%20find%20it%3F.md)
* 先合并第一行和第二行的数据为sum，再固定第三行数据，用二分查找法在sum中找是否存在数使总和为d

### [1010_](http://acm.hdu.edu.cn/showproblem.php?pid=1010)[Tempter of the Bone](https://github.com/Mifan-rabbit/hduOJ/blob/master/1010_Tempter%20of%20the%20Bone.md)
* 深度优先搜索：走一步，标记已走，进栈，此路不通，退栈，标记改为未走
* 剪枝： 对一定不行的路，不进行深度优先搜索
* 一定不行的路： 曼哈顿路径长度是最短的长度，偏出去就要走回来，所以减去最短必走的长度后，剩下可以走的长度要是偶数，不然不能偏移了

## 第八周 

### [1078_](http://acm.hdu.edu.cn/showproblem.php?pid=1078)[FatMouse and Cheese](https://github.com/Mifan-rabbit/hduOJ/blob/master/1078_FatMouse%20and%20Cheese.md)
* 记忆搜索

### [2571_](http://acm.hdu.edu.cn/showproblem.php?pid=2571)[命运](https://github.com/Mifan-rabbit/hduOJ/blob/master/2571_%E5%91%BD%E8%BF%90.md)
* 动态规划

## 第九周

## 第十周

## 第十一周 组合博弈入门

### [1846_](http://acm.hdu.edu.cn/showproblem.php?pid=1846)[Brave Game](https://github.com/Mifan-rabbit/hduOJ/blob/master/1846_Brave%20Game.md)
* 设p为必输点，n为必赢点，且满足三点：
  * 终结点都是必输点；
  * 必输点只能走到必赢点；
  * 必赢点至少有一种方法走到必输点；
* 假设一次只能取{1，2，3},即m值为3，可以发现每隔3个有一个必输点：

0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 |...
:-: | :-: | :-: | :-: | :-:| :-: | :-: | :-: | :-:| :-: | :-: | :-: | :-: | :-:
p | n | n | n | p | n | n | n | p | n | n | n | p |... 

* 假设一次能取{1，3，4}

0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 |...
:-: | :-: | :-: | :-: | :-:| :-: | :-: | :-: | :-:| :-: | :-: | :-: | :-: | :-:
p | n | p | n | n | n | n | p | n | p | n | n | n |...

### [1847_](http://acm.hdu.edu.cn/showproblem.php?pid=1847)[Good Luck in CET-4 Everybody!](https://github.com/Mifan-rabbit/hduOJ/blob/master/1847_Good%20Luck%20in%20CET4%20Everybody.md)
* 每次可以取2的幂次张牌，如表所示，可以找到规律，每隔两个有一个必输点；

0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 |...
:-: | :-: | :-: | :-: | :-:| :-: | :-: | :-: | :-:| :-: | :-: | :-: | :-: | :-:
p | n | n | p | n | n | p | n | n | p | n | n | p |...

* 也可以用SG函数，即用mes集合记录i点所有能到达的点，SG\[i]的值即为不包含mes的最小非负整数，若SG\[i]!=0,则为必赢点；

### [1848_](http://acm.hdu.edu.cn/showproblem.php?pid=1848)[Fibonacci again and again](https://github.com/Mifan-rabbit/hduOJ/blob/master/1848_Fibonacci%20again%20and%20again.md)
* 用上题SG函数，当且仅当SG\[i1]^SG\[i2]^SG\[i3]==0时，是必败点；

### [1849_](http://acm.hdu.edu.cn/showproblem.php?pid=1849)[Rabbit and Grass](https://github.com/Mifan-rabbit/hduOJ/blob/master/1849_Rabbit%20and%20Grass.md)
* 如果只有一个棋子，无论在哪，先手赢；
* 如果有两个棋子A和B，如果A=B，后手只要模仿先手行为，就可以赢；
* 对于三个及以上的棋子可由上面两种情况递推得到结果（但是记忆搜索有点废空间）；
* 如果 i1^i2^i3^i4^i5^...^in=0, 那么后手赢（把每个棋子当作Nim模型的一堆石头，想赢的话，使任意一堆等于其余异或结果）； 

### [2147_](http://acm.hdu.edu.cn/showproblem.php?pid=2147)[kiki's game](https://github.com/Mifan-rabbit/hduOJ/blob/master/2147_kikis%20game.md)
* 可以看出行列都为奇数的时候，是必输点；

n/p|  1  |  2  |  3  |  4  |  5  | 6   | 7  
:-:| :-: | :-: | :-: | :-: | :-: | :-: | :-: 
6  |  n  |  n  |  n  |  n  |  n  |  n  | n 
5  |  p  |  n  |  p  |  n  |  p  |  n  | p 
4  |  n  |  n  |  n  |  n  |  n  |  n  | n 
3  |  p  |  n  |  p  |  n  |  p  |  n  | p 
2  |  n  |  n  |  n  |  n  |  n  |  n  | n 
1  |  p  |  n  |  p  |  n  |  p  |  n  | p 
