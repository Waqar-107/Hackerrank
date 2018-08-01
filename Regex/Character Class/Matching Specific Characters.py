#from dust i have come, dust i will be

import re

s=input()

pattern=r'^[123][120][xs0][30aA][xsu][,.]$'

match=bool(re.match(pattern,s))
print(str(match))


