# from dust i have come, dust i will be

import sys

n=int(input())

for i in range(n):
    s=input()

    if '-' in s:
        a,b,c=s.split('-')
    else:
        a,b,c=s.split(' ')

    sys.stdout.write('CountryCode=%s,LocalAreaCode=%s,Number=%s\n'%(a,b,c))
