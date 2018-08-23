# from dust i have come, dust i will be

import re

n=int(input())
a=[""]*n

for i in range(n):
    a[i]=input()

t=int(input())
for i in range(t):
    w=input()

    cnt=0

    p1=r''
    p2=r''
    
    p1+=w
    p2+=(w[0:len(w)-2]+'se')

    for j in range(n):
        s=a[j]
        
        x=re.findall(p1,s)
        cnt+=len(x)
        
        x=re.findall(p2,s)
        cnt+=len(x)
        
    print(cnt)
