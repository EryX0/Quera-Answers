#include <stdio.h>
#include <stdlib.h>
int main()
{
	int r,c,a,b;
	scanf("%d%d",&r,&c);
	if(c<=10)
	{
		a=11-r;
		b=c;
		printf("Right %d %d",a,b);
	}
	if(c>10)
	{
		a=11-r;
		b=21-c;
		printf("Left %d %d",a,b);
	}
}