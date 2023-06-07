#include <stdio.h>
#include <stdlib.h>
int main()
{
	long long int n;
	int i,j=2,k;
	scanf("%lld",&n);
	for(i=0;i>=0;i++)
	{
		if(j>n)
		{
			printf("%d",j);
			break;
		}
		j=j*2;
	}
	
}