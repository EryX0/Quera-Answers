#include <stdio.h>
#include <stdlib.h>
int main()
{
	char adadch[100];
	int i,j,k;
	int adad[100];
	gets(adadch);
	for(i=0;i<100;i++)
	{
		adad[i]=adadch[i]-48;
	}
	i=0;
	while(adadch[i]!='\0')
	{
		printf("%d:",adad[i]);
		if(adad[i]!=0)
		{
			printf(" ");
		}
		for(j=0;j<adad[i];j++)
		{
			printf("%d",adad[i]);
		}
		if(adadch[i+1]!='\0')
		{
			printf("\n");
		}
		i++;
	}
	return 0;
}