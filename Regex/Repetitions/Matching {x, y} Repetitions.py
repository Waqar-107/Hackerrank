#from dust i have come, dust i will be

import re

s=input()

pattern=r'^\d{1,2}[a-zA-Z]{3,}(\.){0,3}$'

match=bool(re.match(pattern,s))
print(str(match))
