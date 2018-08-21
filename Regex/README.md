.	match any char except \n
^	start of str
$	end of str
\d	any digit
\D 	any non-digit char 
\s 	any space char
\S 	any non-space char
\w  matches any word character-[a-zA-Z0-9_]
\W  matches any non-word
[]  matches only one out of several chars placed inside
[^] mathces everything except the chars inside
{x} matches x occurance of the preceding regex
{x,y} matches at least x to maximum y occurance of the preceding, if y is kept empty it means infinite

\b assert position at a word boundary.

Three different positions qualify for word boundaries :
► Before the first character in the string, if the first character is a word character.
► Between two characters in the string, where one is a word character and the other is not a word character.
► After the last character in the string, if the last character is a word character. 

r1(?=r2)    if r1 occurs, it must be follwed by r2
(?<=r2)r1   r2 must precede before r1
(?<!r2)r1	r1 is never preced by r2
\grp_no		(\w)(\w)(\d)(\d)x\4\3\2\1 here \4 means 4th captured group 
