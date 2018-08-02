#from dust i have come, dust i will be

import re

s=input()

#r1(?=r2)
#if r1 occurs it must be folloed by r2
pattern=r'o(?=oo)'

match=bool(re.match(pattern,s))
print(str(match))
