def cp():
    a,b = input().split()
    a=int(a)
    b=int(b)
    if(max(a,b)>2*min(a,b)):
        print("NO")
    elif((a+b)%3==0):
        print("YES")
    else:
        print("NO")

n=int(input())
for i in range (0,n):
    cp()