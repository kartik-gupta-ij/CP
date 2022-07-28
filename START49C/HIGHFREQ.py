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

    Keymax = max(dict, key= lambda x: dict[x])
    if (dict[Keymax]%2==1):
        dict[Keymax]=dict[Keymax]//2+1;
    else:
        dict[Keymax]=dict[Keymax]//2;
    Keymax = max(dict, key= lambda x: dict[x])
    print(dict[Keymax])