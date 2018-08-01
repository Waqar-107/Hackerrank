#from dust i have come, dust i will be

import re

s=input()

pattern=r'^[^0-9][^aeiou][^bcDF]\S[^AEIOU][^,.]$'

match=bool(re.match(pattern,s))
print(str(match))
