#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	if(n<1 ||n>10)
	{
		return 0;
	}
	printf("W");
	for(i=0;i<n;i++)
	{
		printf("o");
	}
	printf("w!");
}