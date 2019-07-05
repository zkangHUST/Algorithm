# 分治法(Divide and Conquer)

## 1.分冶法三步骤：

1. 分解子问题, divide
2. 解决子问题, conquer
3. 合并子问题的解, combine

## 2.典型应用

1. 二分查找 O(lgn)

2. 乘方问题 O(lgn)

```C
x^n = x^(n/2) * x^(n/2)  if n is even
x^n = x^((n-1)/2) * x((n-1)/2) * x if n is odd
```

3. 斐波那契数列问题


