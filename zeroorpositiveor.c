#include<stdio.h>
int main()
{
	int number;
	printf("input\n");
	scanf("%d",&number);
	if(number==0)
	{
		printf("zero");
	}
	if(number<0)
	{
		printf("negative");
	}
	if(number>0)
	{
	printf("positive");	
	
	}
	return 0;
}
