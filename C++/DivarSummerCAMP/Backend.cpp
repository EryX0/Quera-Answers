#include <iostream>
using namespace std;
int main()
{
	int j=0,n;
	cin >> n;
	long long int duration;
	long long int start_answer;
	long long int end_answer;
	long long int start_epoch[n];
	long long int end_epoch[n];
	for(int i=0;i<n;i++)
	{
		cin >> j;
		cin >> start_epoch[j];
		cin >> end_epoch[j];
	}
	cin >> j;
	cin >> duration;
	for(int i=0;i<n;i++)
	{
		if(start_epoch[0]>duration)
		{
			start_answer=0;
			end_answer=start_answer+duration;
			break;
		}
		if(start_epoch[i+1]-end_epoch[i]>duration)
		{
			start_answer=end_epoch[i]+1;
			end_answer=start_answer+duration;
			break;
		}
	}
	cout << start_answer << " " << end_answer;
}