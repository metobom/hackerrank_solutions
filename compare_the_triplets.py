def compareTriplets(a, b):
    pa = 0
    pb = 0
    for i in range(len(a)):
        if a[i] > b[i]:
            pa+=1
        if a[i] < b[i]:
            pb+=1
        if a[i] == b[i]:
            pass
    return pa, pb 