# 二分搜索模板

```python
template
[l, r) 左闭右开区间
def binary_search:
    while l < r:
        m = l + (r - l) // 2
        if f(m) :
            return m  # optinal
        if g(m):
            r = m  # new range [l, m)
        else:
            l = m + 1  # new range [m + 1, r)
    return l # or not found

time complexity: O(log(r-l) *(f(m) + g(m)))
space complexity: O(1)
```
