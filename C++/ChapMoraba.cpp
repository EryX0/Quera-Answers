#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,j,k;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==0||i==n-1)
			{
				printf("*");
			}
			else if(j==0)
			{
				printf("*");
				for(k=1;k<n-1;k++)
				{
					printf(" ");
				}
				printf("*");
			}
		}
		if(i!=n-1)
		{
			printf("\n");	
		}
	}
}