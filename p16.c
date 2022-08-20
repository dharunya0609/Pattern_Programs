#include<stdio.h>
int main()
{
	int i,j,n,s,l;
	printf("Enter no.of rows:");
	scanf("%d",&n);
	for(i=-n;i<=n;i++)
	{
		if(i<=0)
		{
			l=-i;
		}
		else
		{
			l=i;
		}
		for(s=0;s<n-l;s++)
		{
			printf("  ");
		}
		for(j=0;j<l+1;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
