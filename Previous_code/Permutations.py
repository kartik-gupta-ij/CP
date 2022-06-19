n=int(input())
def p(n):
    if (n==2  or n==3):
        print('NO SOLUTION')

        return
    for i in range (1,n//2+1):
        print(i*2,end=' ')


    for i in range (1,n//2+2):
        print(i*2-1,end=' ')   

p(n)