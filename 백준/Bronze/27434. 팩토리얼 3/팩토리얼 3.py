import sys
i = int(sys.stdin.readline())
result = 1
for a in range(1, i+1):
    result *= a
print(result)
