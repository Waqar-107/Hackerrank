#from dust i have come, dust i will be

import re

s=input()

pattern=r'^\d+[A-Z]+[a-z]+$'

match=bool(re.match(pattern,s))
print(str(match))
