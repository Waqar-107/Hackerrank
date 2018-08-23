# from dust i have come, dust i will be

import re
n=int(input())

cnt=0
for i in range(n):
    s=input()
    s=s.lower()
    p=r'hackerrank'

    a=re.findall(p,s)

    if len(a)>0:
        cnt+=1

print(cnt)
