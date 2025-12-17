import time

def TS(arr, k):
    high = len(arr)-1
    low = 0

    while low < high:
        mid1 = low + (high-low)//3
        mid2 = low + (high-low)*2//3

        if arr[mid1] == k: return mid1
        if arr[mid2] == k: return mid2

        if arr[mid1] > k:
            high = mid1-1
        elif arr[mid2] < k:
            low = mid2 + 1
        else:
            low = mid1 + 1
            high = mid2 - 1

    return "Cannot find" 

def main():
    start = time.time()

    arr = [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15]
    k = 7
    print(TS(arr,k))

    end = time.time()

    print(f'Runtime: {(end-start)*1000:.2f} s')
main()