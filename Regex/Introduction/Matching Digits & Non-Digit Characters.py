#from dust i have come, dust i will be

import re

s=input()

#\d matches a digit
#\D matches a char that is not a digit
pattern=r'(\d\d\D){2}(\d){4}'

match=bool(re.match(pattern,s))
print(str(match))


