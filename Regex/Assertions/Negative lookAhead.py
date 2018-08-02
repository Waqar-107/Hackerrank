#from dust i have come, dust i will be

import re

s=input()

#r1(?!r2)
#r2 must not occur after r1
pattern=r'(.)(?!\1)'

match=re.findall(pattern,s)
print(len(match))
