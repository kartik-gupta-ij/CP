# cook your dish here
n=int(input(""))
for i in range(n):
    ud=int(input(""))
    c=1
    arr = list(map(int,input().split()))
    dict = {}

    for i in range(len(arr)):
        
        if arr[i] in dict:
            dict[arr[i]]=dict[arr[i]]+1
        else:
            dict[arr[i]]=1
    for i in range(len(arr)):
        if(dict[arr[i]]!=arr[i] and dict[arr[i]]%arr[i]!=0):
            c=0
    if(c==1):        
        print("YES")
    else:
        print("NO")