#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i=0,j,k,last=0;
	int a,b,l;
	scanf("%d%d%d",&a,&b,&l);
	while(i<l)
	{
		last=last+a;
		i++;
		if(i==l)
		{
			break;
		}
		last=last+b;
		i++;
	}
	printf("%d",last);
}