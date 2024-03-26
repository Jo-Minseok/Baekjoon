def swap(a,b):
    tmp = b
    b = a
    a = tmp
    return a,b

def Main():
    min, max = map(int,input().split())

    if(min == max):
        print(0)
        return 0
    else:
        if(min > max):
            min,max = swap(min,max)
        print(max - min-1)
        for i in range(min+1,max):
            print(i, end=" ")

Main()