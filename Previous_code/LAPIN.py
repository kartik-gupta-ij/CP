st=input()
f=st[0:len(st)//2]
if(len(st)%2==0):
    l=st[len(st)//2:]
else:
    l=st[len(st)//2+1:]
print(l,"   ",f)
