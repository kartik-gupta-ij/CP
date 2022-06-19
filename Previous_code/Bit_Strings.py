n=int(input())
a=1
c=10**9+7
for i in range(0,n):
    a=(a*2)%c
print(a)