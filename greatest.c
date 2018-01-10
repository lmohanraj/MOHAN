#include <stdio.h>
int main()
{
	int a,b,c;
	printf("\n\ninput");
	scanf("%d%d%d",&a,&b,&c);
	printf("\n\ninputs are %d %d %d",a,b,c);
	if(a>b&&a>c)
	{
		printf("\n\n%d is the greatest number",a);
	}
	else if(b>a&&b>c)
	{
		printf("\n\n%d is the greatest number",b);
	}
	else
	{
		printf("\n\n%d is the greatest number",c);
	}
}
