from math import isqrt

def JS(array, k):
    n = len(array)
    step = isqrt(n)
    pre = 0

    while (array[min(n, pre)-1] < k):
        pre += step
        if pre>=n:
            return -1
    for i in range(pre,pre-step-1, -1): #since pre is obviously higher than index of k
        if array[i] == k:
            return i+n #This return backward index so add the size to return forward index
    return -1

arr = [2,3,4,10,40]
target = 10

print(JS(arr, target))