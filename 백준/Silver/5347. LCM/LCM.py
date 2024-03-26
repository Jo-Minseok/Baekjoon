import sys


def gcd(a, b):
    if(b == 0):
        return a
    else:
        return gcd(b, a % b)


i = int(sys.stdin.readline())
for j in range(0, i):
    a, b = sys.stdin.readline().split()
    a = int(a)
    b = int(b)
    print(int(a*b/gcd(a, b)))
