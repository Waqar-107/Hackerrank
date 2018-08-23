# from dust i have come, dust i will be

import re

n=int(input())
a=[""]*n

for i in range(n):
    a[i]=input()

t=int(input())
for i in range(t):
    w=input()

    if w=='our':
        continue

    cnt=0

    p1=r''
    p2=r''

    p1+=('\\b'+w+'\\b')
    p2+=('\\b'+w.replace('our','or')+'\\b')

    for j in range(n):
        s=a[j]

        x=re.findall(p1,s)
        cnt+=len(x)

        x=re.findall(p2,s)
        cnt+=len(x)

    print(cnt)
