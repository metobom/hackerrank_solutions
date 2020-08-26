def miniMaxSum(arr):
    a = sorted(arr)
    summ = 0
    for i in (a):
        summ+=i
    maxi = summ - max(a)
    mini = summ - min(a)
    print(maxi, mini)