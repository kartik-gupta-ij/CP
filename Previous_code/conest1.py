import sys
def pl():
    le=int(input())
    st=input()
    ar = list(st)
    

    
    if(le==1 or le==2):
        if(le==2):
            if(ar[0]==ar[1]):
                print("NO")
            else:
                print("YES")
        else:
            print("YES")

    else:
        print("NO")
    
    
    

    


n=int(input())
for i in range (0,n):
    pl()