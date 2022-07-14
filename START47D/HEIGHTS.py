# cook your dish here
# cook your dish here
n=int(input(""))
for i in range(n):
    ud=int(input(""))
    c=0
    arr = list(map(int,input().split()))
    dict = {}
    m=max(arr)
    arr.sort()
    
    flag=1
    for i in range(len(arr)):
        
        if arr[i] in dict:
            dict[arr[i]]=dict[arr[i]]+1
        else:
            dict[arr[i]]=1

    for i in range(len(arr)):
        if(dict[arr[i]]==1 and arr[i]!=m):
            c=c+1
        elif(dict[arr[i]]==1 and arr[i]==m and c!=0):

            c=c+1
        elif(dict[arr[i]]==1 and arr[i]==m and c==0):
            
            
            if(dict[max(dict, key=dict.get)]<3):
                print( dict[max(dict, key=dict.get)])
                flag=0
            else:
                c=1

    if(flag):
        if(c>1):
            if(c%2==0):
                print(int(c/2))
            else:
                print(c//2+1)
        else:
            print(c)