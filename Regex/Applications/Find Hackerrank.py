# from dust i have come, dust i will be

import re

n=int(input())

p1=r'^hackerrank.+'
p2=r'.+hackerrank$'
p0=r'^hackerrank.+hackerrank$'

for i in range(n):
    s=input()

    if s=='hackerrank':
        print(0)
        continue

    if bool(re.match(p0,s)):
        print(0)
    elif bool(re.match(p1,s)):
        print(1)
    elif bool(re.match(p2,s)):
        print(2)
    else:
        print(-1)
