arrays = list(map(int, input().split()))

def partition(array, low, high):
    pivot = array[high];
    index = low;

    for i in range(low, high):
        if array[i] <= pivot:
            index+=1;
    array[index], array[high] = array[high], array[index];
    return index;

def quicksort(array, low=0, high=None):
    if high == None:
        high = len(array) - 1;
    if low < high:
        mid = partition(array, low, high)
        quicksort(array, mid+1, high);
        quicksort(array, low, mid-1);
quicksort(arrays)
print(arrays)

#this is crucial, must review