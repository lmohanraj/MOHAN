#include <stdio.h>
int main()
{
    char c;
    int Vowel1, Vowel2;

    printf("Enter an alphabet: ");
    scanf("%c",&c);

   Vowel1 = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
Vowel2 = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (Vowel1 || Vowel2)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;
}
