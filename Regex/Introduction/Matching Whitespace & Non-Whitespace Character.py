#from dust i have come, dust i will be

import re

s=input()

#\s matches a whitespace
#\S matches a non-whitespace
pattern=r'(\S\S\s){2}\S\S'

match=bool(re.match(pattern,s))
print(str(match))
