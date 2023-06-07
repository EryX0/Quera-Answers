#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num;
	int i,j,k;
	int sum=0;
	scanf("%d",&num);
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==num)
	{
		printf("YES");
	}
	else printf("NO");
}