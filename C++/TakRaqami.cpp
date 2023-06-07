#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	long long int n,i=0;
	scanf("%lld",&n);
	long long int sum=0;
	while(n>9)
	{
		while(n>0)
		{
			i=n%10;
			sum=sum+i;
			n=n/10;
		}
		n=sum;
		sum=0;
	}
	printf("%lld",n);
}