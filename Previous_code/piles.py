i=int(input())
st=input()
sum=0
for i in range(0,i):
    if(st[i]=="-"):
        sum=sum-1
    if(st[i]=="+"):
        sum=sum+1
    if(sum==-1):
        sum=0
print(sum)
