#include <iostream>
using namespace std;
int main()
{
	int i=0,j=0,n,m;
	cin >> n;
	long long int answer=0;
	long long int temp_start;
	long long int temp_end;
	long long int temp_answer;
	long long int start_epoch1[n];
	long long int end_epoch1[n];
	for(int i=0;i<n;i++)
	{
		cin >> j;
		cin >> start_epoch1[j];
		cin >> end_epoch1[j];
	}
	cin >> m;
	long long int start_epoch2[m];
	long long int end_epoch2[m];
	for(int i=0;i<m;i++)
	{
		cin >> j;
		cin >> start_epoch2[j];
		cin >> end_epoch2[j];
	}
	i=j=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(end_epoch1[i]>start_epoch2[j] && i==j)
			{
				if(start_epoch1[i]>start_epoch2[j])
				{
					temp_start=start_epoch1[i];
				}
				else
				{
					temp_start=start_epoch2[j];
				}
				if(end_epoch1[i]<end_epoch2[j])
				{
					temp_end=end_epoch1[i];
				}
				else
				{
					temp_end=end_epoch2[j];
				}
				temp_answer=temp_end-temp_start;
			}
			answer=temp_answer+answer;
		}
	}
	cout << answer;
}