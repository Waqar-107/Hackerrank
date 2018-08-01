#from dust i have come, dust i will be

import re

s=input()

#\w matches a word
#\W matches a non-word
pattern=r'(\w){3}\W(\w){10}\W(\w){3}'

match=bool(re.match(pattern,s))
print(str(match))


