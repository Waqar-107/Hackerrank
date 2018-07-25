#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define maxn 2000

int main() 
{
    char ch;
    char s1[maxn], s2[maxn];
    
    scanf("%c",&ch);
    scanf(" %s",s1);
    scanf(" %[^\n]%s",s2);  //scan till newline found
    
    printf("%c\n",ch);
    printf("%s\n",s1);
    printf("%s",s2); 
    
    return 0;
}
