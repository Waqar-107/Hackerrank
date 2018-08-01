#from dust i have come, dust i will be

import re

s=input()

#. means any char except newline
#\. for literal '.', just like lex
pattern=r'^(...\.){3}...$'

match=re.match(pattern,s) is not None
print(str(match).lower())
