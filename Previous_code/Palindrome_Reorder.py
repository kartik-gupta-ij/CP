import sys
def pl():
    st=input()

    al={}
    ar = list(st)
    # sys.stdout.write(" ".join(map(str, ar)) + "\n")

    start=0
    end=len(ar)-1
    mid=len(st)//2
    odd=0
    for i in range(0,len(st)):
        if(st[i] in al):
            al[st[i]]=al[st[i]]+1
        else:
            al[st[i]]=1
    
    for l, n in al.items():
        if(n%2==0):
            for i in range(0,(n//2)):
                # print('befo',ar,"   ",start,"    ", end,'    ',l,'    ',n)
                ar[start]=l
                
                ar[end]=l
                
                start=start+1
                end=end-1
                # print('afte',ar,"   ",start,"    ", end,'    ',l,'    ',n)
                
        if(n%2==1):
            odd=odd+1
            ar[mid]=l
            for i in range(0,(n//2)):
                ar[start]=l
                
                ar[end]=l
                
                start=start+1
                end=end-1
    if(odd<2):
        sys.stdout.write("".join(map(str, ar)) + "\n")
    else:
        print("NO SOLUTION")
        return
    
    

    



pl()