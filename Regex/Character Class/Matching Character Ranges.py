#from dust i have come, dust i will be

import re

s=input()

pattern=r'^[a-z][1-9][^a-z][^A-Z][A-Z](.*)$'

match=bool(re.match(pattern,s))
print(str(match))
