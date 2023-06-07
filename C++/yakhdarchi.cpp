#include <stdio.h>
#include <stdlib.h>
int main()
{
	int T,i,j,k;
	scanf("%d",&T);
	if(T>6000||T<=-273)
	{
		return 0;
	}
	if(T>100)
	{
		printf("Steam");
	}
	else if(T<0)
	{
		printf("Ice");
	}
	else printf("Water");
}