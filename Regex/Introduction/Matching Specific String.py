#from dust i have come, dust i will be

import re

str=input()
pattern=r'hackerrank'

#match is a list
match=re.findall(pattern,str)

print(len(match)," matched")
