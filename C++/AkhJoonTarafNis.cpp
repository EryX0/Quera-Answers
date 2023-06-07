#include <iostream>
#include <string>
using namespace std;
int main()
{
	string day[7]={"shanbe","1shanbe","2shanbe","3shanbe","4shanbe","5shanbe","jome"};
	int check[7]={0,0,0,0,0,0,0};
	string temp;
	int n,i=0,j,k,count=0;
	for(i=0;i<3;i++)
	{
		cin >> n;
		for(j=0;j<n;j++)
		{
			cin >> temp;
			for(k=0;k<7;k++)
			{
				if(day[k]==temp)
				{
					check[k]=1;
				}
			}
		}
	}
	for(i=0;i<7;i++)
	{
		if(check[i]==0)
		{
			count++;
		}
	}
	cout << count;
}