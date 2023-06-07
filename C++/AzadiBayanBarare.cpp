#include <stdio.h>
#include <stdlib.h>
int main()
{
	int k,i;
	scanf("%d",&k);
	int up=07,down=0;
	for(i=0;i<=k;i++)
	{
		if(up==k)
		{
			printf("Bala Barare");
			return 0;
		}
		else if(down==k)
		{
			printf("Payin Barare");
			return 0;
		}
		down=up+1;
		up=down+1;
	}
}