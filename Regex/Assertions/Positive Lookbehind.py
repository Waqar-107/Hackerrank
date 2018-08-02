#from dust i have come, dust i will be

import re

s=input()

#(?<=r2)r1
#r2 must occur before r1
pattern=r'(?<=[13579])\d'

match=bool(re.match(pattern,s))
print(str(match))
