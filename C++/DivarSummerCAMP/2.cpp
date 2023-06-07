#include <iostream>
#include <string>
using namespace std;
int main()
{
	string num;
	string temp;
	int i=0;
	cin >> num;
	int flag[100];
	while(num[i]!='\0')
	{
		if(num[i]==num[i+1])
		{
			for(int k=1;k<=9;k++)
			{
				if(num[i]==num[i+k] && flag[i]!=1)
				{
					num[i]=k+50;
					num[i+k]=i+49;
					flag[i+k]=1;
				}
				else ;
			}
		}
		i++;
	}
	cout << num;
}