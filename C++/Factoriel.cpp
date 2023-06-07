#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,i,j,k,fac;
	scanf("%d",&n);
	fac=1;
	for(i=1;i<=n;i++)
	{
		fac=fac*i;
	}
	printf("%d",fac);
}