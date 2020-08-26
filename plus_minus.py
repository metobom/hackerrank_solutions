def plusMinus(arr):
    pos = 0
    neg = 0
    bla = 0
    for i in arr:
        div = len(arr)
        if i > 0:
            pos+=1
        if i < 0:
            neg+=1
        if i ==0:
            bla+=1
    out0 = pos/div
    out1 = neg/div
    out2 = bla/div
    print(out0); print(out1); print(out2);