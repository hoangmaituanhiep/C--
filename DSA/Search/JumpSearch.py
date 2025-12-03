from math import isqrt

def JS(array, k):
    n = len(array)
    step = isqrt(n)

    for i in range(0, n-step, step):
        if array[i] <= k < array[i+step]:
            for j in range(i, i+step+1):
                if array[j] == k:
                    return j
            return -1
    return -1

arr = [2,3,4,10,40]
target = 10

print(JS(arr, target))