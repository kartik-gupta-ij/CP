def maxt(n):
    j=1
    while(n>j):
        j=j*2
    return(j//2)



def rc():
    n=int(input())
    

    t=maxt(n)
    for i in range(n-1,t-1,-1):
        print(i,end=" ")
    for i in range(0,t):
        print(i,end=" ")
        
x=int(input())
for i in range(0,x):
    rc()
