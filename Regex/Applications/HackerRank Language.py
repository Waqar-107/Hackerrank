# from dust i have come, dust i will be

import re

n=int(input())

p=r'^(C|CPP|JAVA|PYTHON|PERL|PHP|RUBY|CSHARP|HASKELL|CLOJURE|BASH|SCALA|ERLANG|CLISP|LUA|BRAINFUCK|JAVASCRIPT|GO|D|OCAML|R(UBY)?|PASCAL|SBCL|DART|GROOVY|OBJECTIVEC)$'

for i in range(n):
    a,b=map(str,input().split())

    m=bool(re.match(p,b))

    if m:
        print('VALID')
    else:
        print('INVALID')
