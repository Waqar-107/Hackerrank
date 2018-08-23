# from dust i have come, dust i will be

import re

n=int(input())

p=r'^[hH][iI]\s[^dD].*'
for i in range(n):
    s=input()
    
    m=bool(re.match(p,s))

    if m:
        print(s)
