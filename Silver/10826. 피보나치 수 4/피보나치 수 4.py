import sys

arr = [0, 1]
i = int(sys.stdin.readline())
for a in range(2, i+1):
    arr.append(arr[a-1] + arr[a-2])
print(arr[i])
