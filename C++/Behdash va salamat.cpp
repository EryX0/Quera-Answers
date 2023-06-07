#include <stdio.h>
#include <stdlib.h>
int main()
{
	int X,N;
	int sum=0;
	scanf("%d%d",&X,&N);
	if(N==0)
	{
		printf("20");
		return 0;
	}
	else if(N==7)
	{
		printf("%d",X);
		return 0;
	}
	else if(N>7||(N>0&&N<7))
	{
		sum=X-N;
		if(sum<0)
		{
			printf("0");
			return 0;
		}
		else printf("%d",sum);
	}
}