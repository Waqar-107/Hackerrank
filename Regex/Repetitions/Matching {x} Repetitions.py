#from dust i have come, dust i will be

import re

s=input()

pattern=r'^[a-zA-Z02468]{40}([13579\s]){5}$'

match=bool(re.match(pattern,s))
print(str(match))
