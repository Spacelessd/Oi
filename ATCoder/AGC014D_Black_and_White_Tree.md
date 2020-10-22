# AGC014D Black and White Tree

### Description

有一颗n个点的树，刚开始每个点都没有颜色。

Alice和Bob会轮流对这棵树的一个点涂色，Alice涂白，Bob涂黑，Alice先手。

若最后存在一个白点，使得这个白点所有相邻点都为白色，则Alice胜，否则Bob胜。

请问是先手必胜还是后手必胜。

### Solution

贪心即可。考虑当前树上的叶子节点，若先手将其父亲节点染为白色，则后手定会将其儿子节点染为黑色，否则该儿子节点满足条件，先手胜利。若该父亲节点有两个或以上儿子节点，先手必胜。
每一轮涂色后，该两点对胜负无影响，直接从树上删去，继续贪心。最后判断根节点是否满足条件即可。



其实这个题我觉得 https://www.cnblogs.com/PinkRabbit/p/AGC014.html 讲的很好，代码也很好看

事后我学弟和我说，这破题你搞什么贪心，直接网络流，所以网络流大概也是可做，但是我没有做,以及实际上做下来感觉代码和求树的完美匹配一样
