def diagonalDifference(arr):
    n = len(arr)
    s1 = 0
    s2 = 0
    j = n - 1
    for i in range(n):
        s1 += arr[i][j]
        s2 += arr[i][i]
        j-=1
    out = abs(s2-s1)
    return out