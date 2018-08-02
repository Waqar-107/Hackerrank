#from dust i have come, dust i will be

import re

s=input()

#(?<!r2)r1
#r2 must not occur before r1
pattern=r'(?<![aeiouAEIOU]).'

match=re.findall(pattern,s)
print(len(match))
