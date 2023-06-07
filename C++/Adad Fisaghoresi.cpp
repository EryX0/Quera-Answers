#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n1,n2,n3,sn1,sn2,sn3;
	scanf("%d%d%d",&n1,&n2,&n3);
	sn1=n1*n1;
	sn2=n2*n2;
	sn3=n3*n3;
	if(sn1==sn2+sn3||sn2==sn1+sn3||sn3==sn1+sn2 && n1<n2+n3 && n2<n1+n3 && n3<n1+n2)
	{
		printf("YES");
	}
	else printf("NO");
	return 0;
}