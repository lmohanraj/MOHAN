#include <stdio.h>
int main()
{
    long long l;
    int count = 0;

    printf("Enter an integer ");
    scanf("%lld", &l);

    while(n != 0)
    {
        n=n/10;
        ++count;
    }

    printf("Number of digits: %d", count);
}
