def cg(n):
    if (n==0):
        a=["0"]
        return a
    elif (n==1):
        a=["0","1"]
        return a
    else:
        ans=cg(n-1)
        main=[]
        # print(ans)
        for i in range(0,len(ans)):
            s=ans[i]
            main.append("0"+s)
        for i in range(len(ans)-1,-1,-1):
            s=ans[i]
            main.append("1"+s)
        return main

n=int(input())
ar=cg(n)

print(*ar, sep="\n")