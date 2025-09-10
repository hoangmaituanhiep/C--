arrays = list(map(int, input("Enter the numbers: ").split()))
n=len(arrays)

for i in range(n):
    index = i

    for j in range (i+1, n):
        if arrays[j] < arrays[index]:
            index = j

    arrays[i], arrays[index] = arrays[index], arrays[i]

print(arrays)