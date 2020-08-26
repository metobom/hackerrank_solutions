def birthdayCakeCandles(ar):
    counter = 0
    a = max(ar)
    for i in ar:
        if i == a:
            counter+=1
    return counter