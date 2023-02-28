import sys
for i in range(3):
    count = int(sys.stdin.readline())
    result = 0
    for j in range(count):
        num = int(sys.stdin.readline())
        result += num
    if(result == 0):
        print(0)
    elif(result >0):
        print("+")
    else:
        print("-")    