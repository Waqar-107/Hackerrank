# from dust i have come, dust i will be

import re
n=int(input())

p=r'^[a-z]{0,3}[0-9]{2,8}[A-Z]{3,}'
for i in range(n):
    s=input()
    
    m=re.match(p,s)
    
    if m:
        print('VALID')
    else:
        print('INVALID')
    
    
