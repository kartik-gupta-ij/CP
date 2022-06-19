import sys
n= int(input())
i=n-1
o=[n]
t=[]
s=n*(n+1)/2
if(s%2==0):
    print('YES')
    
    while(i>1):
        if(i>3):
            t.append(i)
            t.append(i-1)
            o.append(i-2)
            o.append(i-3)
            i=i-4
        elif(i==3):
            t.append(i)
            t.append(i-1)
            o.append(i-2)
            i=i-3
        elif(i==2):
            t.append(i)
            t.append(i-1)
            i=i-2
        elif(i==1):
            t.append(i)
            i= i-1
    print(len(o))
    sys.stdout.write(
        " ".join(map(str, o)) + "\n"
    )
    
    print(len(t))
    sys.stdout.write(
        " ".join(map(str, t)) + "\n"
    )



        
    



else:
    print('NO')