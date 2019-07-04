# 排序算法总结

|算法|时间复杂度||
|---|---|---|
|INSERT-SORT|O(n^2)|
|MERGE-SORT|O(nlgn)|
|QUICK-SORT|O(nlgn)|

## 1. 插入排序

```C
Insert-Sort(A): // A[1...length]
  for j = 2 to A.length
    key = A[j]
    // insert A[j] into the sorted sequence A[1...j-1]
    i = j - 1
    while i > 0 and A[i] > key
      A[i + 1] = A[i]
      i = i - 1
    A[i + 1] = key
```

## 2.归并排序
```
MERGE-SORT(A, p, r):
  if (p < r)
    q = (p + r) / 2  //mid
    MERGE-SORT(A, p, r);
    MERGE-SORT(A, q + 1, r);
    MERGE(A, p, q, r);

MEGRE(A, p, q, r):
  n1 = p - q + 1 // length of A[p...q]
  n2 = r - q  // length of A[q+1 ...r]
  let L[1...n1+1] and R[1...n2+1] be new arrays
  for i = 1 to n1
    L[i] = A[p + i - 1]
  for j = 1 to n2
    R[j] = A[q + j]
  L[n1 + 1] = +INFINITE
  R[n2 + 1] = +INFINITE
  i = 1
  j = 1
  for k = p to r
    if L[i] <= R[j]
      A[k] = L[i]
      i = i + 1
    else 
      A[k] = R[j]
      j = j + 1
```

## 2.快速排序

```
QUICKSORT(A, p, r):
if p < r:
  q = PARTITION(A, p, r)
  QUICKSORT(A, p, q - 1)
  QUICKSORT(A, q + 1, r)

// 数组划分,算法的关键部分
PARTITION(A, p, r):
  x = A[r]
  i = p - 1
  for j = p to r - 1
    if A[j] <= x
      i = i + 1
      exchange A[i] with A[j]
  exchange A[i + 1] with A[r]
  return i + 1
```

数组被划分为四个部分：
A[p...i]区间内的所有元素均小于x
A[i+1...j-1]区间内的所有元素均大于x
A[j...r-1]区间内的所有元素还没有处理完成，可能属于任意情况
A[r]==x,即为主元

## 3. 堆排序
