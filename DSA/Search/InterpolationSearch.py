import time

def IS(arr, k):
    low = 0
    high = len(arr) - 1

    while low<high and arr[low] <= k <= arr[high]:
        pos = low + ((k - arr[low])*(high - low))//(arr[high] - arr[low])

        if arr[pos] == k:
            return pos
        if arr[pos] > k:
            high = pos-1
        else:
            low = pos+1
    return -1

def main():
    start = time.time()

    arr = [10, 12, 13, 16, 18, 19, 20, 21, 22, 23, 24, 33, 35, 42, 47]
    target = 18

    index = IS(arr, target)

    end = time.time()

    print(index, "Time: ", f'{end-start:.2f}')
main()