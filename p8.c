#include<stdio.h>
int main()
{
	int i,j,n;
	int cnt=1;
	printf("Enter no.of rows:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			printf("%d ",cnt++);
		}
		printf("\n");
	}
	return 0;
}
