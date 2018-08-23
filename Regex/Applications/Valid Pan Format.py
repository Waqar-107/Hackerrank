# from dust i have come, dust i will be

import re

n=int(input())

p=r'^[A-Z]{5}[0-9]{4}[A-Z]$'
for i in range(n):
    s=input()

    m=bool(re.match(p,s))
    
    if m:
        print('YES')
    else:
        print('NO')

