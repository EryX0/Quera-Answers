#include <iostream>
using namespace std;
int main()
{
	int m;
	int sum=0;
	cin >> m;
	if(m>0)
	{
		int num[m+1][m+1];
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin >> num[i][j];
			}
		}
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(i==j || i+j==m-1)
				{
					if((num[i][j]%3)==1)
					{
						sum=sum+num[i][j];
					}
				}
			}
		}
	}
	cout << sum;
}