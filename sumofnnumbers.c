#include<stdio.h>
int main()
{
	int n,k=0,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		k=k+i;
	}
	printf("sum=%d",k);
	return 0;
}
