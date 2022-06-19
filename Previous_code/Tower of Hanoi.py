def dp(so,he,di,n):
    if(n==1):
        print (so,' ',di)
        return
    else:
        (dp(so,di,he,n-1))
        (dp(so,he,di,1))
        (dp(he,so,di,n-1))
        return


def toh(n):
    if (n==1):
        return 1
    else:
        a=2*toh(n-1)+1
    return a




n= int(input())
print(toh(n))
dp("1","2","3",n)

  
