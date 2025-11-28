def BS(array, k):
    left = 0
    right = len(array) - 1

    while left < right:
        mid = (left+right)//2

        if array[mid] == k:
            return mid
        elif array[mid] > k:
            right = mid-1
        else:
            left = mid+1
    
    return -1

arr = [2,3,4,10,40]
target = 10

print(BS(arr, target))

