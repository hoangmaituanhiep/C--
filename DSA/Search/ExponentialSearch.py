import time

def ES(array, k):
    if array[0] == k:
        return 0
    
    i = 1
    pre = i

    while array[i] <= k and i < len(array):
        pre = i
        i *= 2

    low = pre
    high = i
    while low<high:
        mid = (low+high)//2

        if array[mid] == k:
            return mid
        elif array[mid]>k:
            high = mid-1
        else:
            low = mid+1
    return -1

def main():
    start = time.time()

    arr = [10, 12, 13, 16, 18, 19, 20, 21, 22, 23, 24, 33, 35, 42, 47]
    target = 18

    index = ES(arr, target)
    end = time.time()

    print(index, "Time: ", f'{end-start:.2f}')
main()