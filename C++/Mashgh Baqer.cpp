#include <stdio.h>
#include <stdlib.h>
int main()
{
	int z1,z2,z3;
	scanf("%d%d%d",&z1,&z2,&z3);
	if((z1+z2+z3)==180 && z1>0 && z2>0 && z3>0 && z1<360 && z2<360 && z3<360)
	{
		printf("Yes");
	}
	else printf("No");
	return 0;
}