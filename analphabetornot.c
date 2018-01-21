#include <stdio.h>
int main()
{
    char l;
    printf("Enter a character ");
    scanf("%c",&l);

    if( (l>='a' && l<='z') || (l>='A' && l<='Z'))
        printf(" alphabet");
    else
        printf(" not an alphabet");

    return 0;
}
