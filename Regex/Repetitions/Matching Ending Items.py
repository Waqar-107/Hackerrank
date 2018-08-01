#from dust i have come, dust i will be

import re

s=input()

pattern=r'^[a-zA-Z]*s$'

match=bool(re.match(pattern,s))
print(str(match))
