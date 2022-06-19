def xyz():
    n=input().split()
    s = list(map(int, input().split()))


    mi=min(s)

    su=0
    for i in range(0,len(s)):
        su=su+(int(s[i])-int(mi))
    print(su)



n=int(input())
for i in range(0,n):
    xyz()
