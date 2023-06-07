#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,j,k;
	int n[1000];
	for(i=0;i<1000;i++)
	{
		scanf("%d",&n[i]);
		if(n[i]==0)
		{
			k=i;
			break;
		}
	}
	for(k=i-1;k>=0;k--)
	{
		printf("%d\n",n[k]);
	}
}