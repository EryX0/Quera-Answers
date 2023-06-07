#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,j,k;
	for(i=1;i<=n;i++)
	{
		printf("\n");
		for(j=1;j<=n;j++)
		{
			printf("%d ",i*j);
		}
	}
}