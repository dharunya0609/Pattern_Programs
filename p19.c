#include<stdio.h>
int main()
{
	int i,j,n,s;
	printf("Enter no.of rows:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=-n;j<=n;j++)
		{
			if(-i<j && j<i)
		    	printf("  ");
		    else
		        printf("* ");		
		}
		printf("\n");
	}
	return 0;
}
