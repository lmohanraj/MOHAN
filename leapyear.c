#include <stdio.h>
int main()
{
int year;
printf("\ninput");
scanf("%d",&year);
printf("\n%d",year);
if(year%4==0)
{
		printf("\nleap year");
	}
	else
	{
	printf("\nnot a leap year");
	}
}
