#include <iostream>
using namespace std;
int check(int i, int j, int sum)
{
	if()
	return sum;
}
int main()
{
	int m;
	cin >> m;
	int num[m][m];
	int flag[m][m];
	int sum=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin >> num[i][j];
		}
	}
	sum=check(0,0,sum);
	cout << sum;
}
