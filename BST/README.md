# 二叉搜索树相关算法

## 1. 遍历

中序遍历伪代码

```C
INORDER-TRAVEL-WALK(x)
if x != NIL
    INORDER-TRAVEL-WALK(x.left)
    print x.key
    INORDER-TRAVEL-WALK(x.right)
```
前序遍历，后序遍历的算法与此类似，只需要调整一下`print x.key`的位置即可。

## 2. 查找

### 2.1 递归查找

```C
TREE-SEARCH(x, k)
if x == NIl or k == x.key
    return x
if k < x.key
    return TREE-SEARCH(x.left, k)
else 
    return TREE-SEARCH(x.left, k)
```

### 2.2 迭代查找

```C
ITERATIVE-TREE-SEARCH(x, k)
while x != NIL and k != x.key
    if k < x.key
        x = x.left
    else 
        x = x.right
retutn x
```

## 3. 最大关键字元素和最小关键字元素

查找最大关键字元素

```C
TREE-MAXNUM(x)
while x.right != NIL
    x = x.right
return x
```

查找最小关键字元素

```C
TREE-MINNUM(x)
while x.left != NIL
    x = x.left
return x
```

## 4.前驱和后继

给定一棵二叉搜索树中的一个节点，有时候需要按照中序遍历的顺序，寻找它的后继节点。如果所有的关键字互不相同，那么一个节点x的后继是大于x.key的最小关键字的节点。一棵二叉搜索树的结构允许我们通过没有任何关键字的比较来确定一个节点的后继。如果x是这棵树中的最大节点，那么返回NIL。

```C
TREE-SUCCESSOR(x)
if x.right != NIL
    return TREE-MINNUM(x.right)
y = x.p
while y != NIL and x == y.right
    x = y
    y = y.p
return y
```

同理，寻找前驱节点的算法是

```C
TREE-PREDECESSOR(x)
if x.left != NIL
    return TREE-MAXNUM(x.left)
y = x.p
while y != NIL and x == y.left
    x = y
    y = y.p
return y
```

定理： 在一个高度为h的二叉搜索树中，动态集合上的操作SEARCH、MINNUM、MAXNUM、SUCCESSOR、PREDECESSOR可以在O(h)时间内完成。

