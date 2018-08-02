#from dust i have come, dust i will be

import re

s=input()

#r1(?!r2)
#r2 must not occur after r1
pattern=r'^([a-z])(\w)(\s)(\W)(\d)(\D)([A-Z])([a-zA-Z])([aeiouAEIOU])(\S)\1\2\3\4\5\6\7\8\9\10$'

match=bool(re.match(pattern,s))
print(str(match))
