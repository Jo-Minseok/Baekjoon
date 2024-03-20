test_case = int(input())

for i in range(0, test_case):
    arr = []
    max = 0
    index = 1
    row, column = map(int, input().split())
    for k in range(0, column):
        num_list = list(map(int, input().split()))
        arr.append(num_list)
    for j in range(row):
        sum = 1
        for _ in range(column):
            sum *= arr[_][j]

        if (j == 0):
            max = sum
        if sum >= max:
            max = sum
            index = j+1
    print(index)
