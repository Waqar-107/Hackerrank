#from dust i have come, dust i will be

import re

n=int(input())
for i in range(n):
    s=input()

    p=r'^[_.]\d+[a-zA-Z]*[_]?$'
    match=bool(re.match(p,s))

    if match:
        print('VALID')
    else:
        print('INVALID')
