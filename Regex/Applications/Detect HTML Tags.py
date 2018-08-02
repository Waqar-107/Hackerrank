#from dust i have come, dust i will be

import re

n=int(input())
ans=set()

for i in range(n):
    s=input()

    pattern=r'<\s*(\w+)'
    tags=re.findall(pattern,s)
    for t in tags:
        ans.add(t)

x=1
ans=sorted(ans)
for i in ans:
    print(i,end='')
    
    if(x<len(ans)):
        print(';',end='')
    
    x+=1
