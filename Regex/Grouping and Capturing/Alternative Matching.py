#from dust i have come, dust i will be

import re

s=input()

pattern=r'(Mr\.|Ms\.|Mrs\.|Dr\.|Er\.)[a-zA-Z]+'

match=bool(re.match(pattern,s))
print(str(match))
