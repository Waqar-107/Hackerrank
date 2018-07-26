#include <stdio.h>

int main()
{
    int n;
    char *ch[]={"null","one","two","three","four","five",
    "six","seven","eight","nine"};

    scanf("%d",&n);

    if(n>9)
        printf("greater than 9");
    else
        printf("%s",ch[n]);

    return 0;
}
