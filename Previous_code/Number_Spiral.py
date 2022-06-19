


def sp():
    y,x = input().split()
    x=int(x)
    y=int(y)
    if(x>y):
        if(x%2==1):
            a=x*x-(x-1)+(x-y)
            print(a)
        if(x%2==0):
            a=x*x-(x-1)-(x-y)
            print(a)

    elif(x<y):
        if(y%2==1):
            a=y*y-(y-1)-(y-x)
            print(a)
        if(y%2==0):
            a=y*y-(y-1)+(y-x)
            print(a)
    else:
        a=y*y-(y-1)
        print(a)

n=int(input())
for i in range (0,n):
    sp()
    





