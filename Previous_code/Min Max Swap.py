def mn():
    c=int(input())

    b=list(map(int,input().split()))
    a=list(map(int,input().split()))
    mva= max(a)
    mia = a.index(mva)
    mvb= max(b)
    mib = b.index(mvb)
    while(mia!=mib):
        mva= max(a)
        mia = a.index(mva)
        if(a[mia]>b[mia]):
            x=a[mia]
            a[mia]=b[mia]
            b[mia]=x
    mva= max(a)
    mia = a.index(mva)
    mvb= max(b)
    mib = b.index(mvb)
    print(mva*mvb)

n=int(input())
for i in range (0,n):
    mn()