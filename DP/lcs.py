def lcs(a, b):
    c = [[0 for i in range(len(b) + 1)] for j in range(len(a) + 1)]
    res = ''
    for i in range(len(a) + 1):
        for j in range(len(b) + 1):
            if (i == 0 or j == 0):
                c[i][j] = 0
            elif(a[i - 1] == b[j - 1]):
                # res += a[i - 1]   
                c[i][j] = c[i - 1][j - 1] + 1
            elif (c[i - 1][j] >= c[i][j - 1]):
                c[i][j] = c[i - 1][j]
            else:
                c[i][j] = c[i][j - 1]
    i = len(a)
    j = len(b)
    while (i > 0 and j > 0):
        if c[i - 1][j] == c[i][j] :
            i -= 1
        elif c[i][j - 1] == c[i][j]:
            j -= 1
        else:
            i -= 1
            j -= 1
            res += a[i]
    return res[::-1]

ans = lcs("annbb", "avnnnnnb")
print(ans)