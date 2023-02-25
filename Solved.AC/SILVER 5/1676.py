import sys

i = int(sys.stdin.readline())
j = 1
result = 0
for a in range(1, i+1):
    j *= a
while (1):
    if (j // 10 == 0):
        break
    if (j % 10 == 0):
        result += 1
    else:
        break;
    j //= 10

print(result)