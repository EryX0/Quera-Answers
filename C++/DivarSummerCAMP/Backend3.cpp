#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector <string> busy_day;
vector <string> days;
int main()
{
	days.push_back("MONDAY");
	days.push_back("TUESDAY");
	days.push_back("WEDNESDAY");
	days.push_back("THURSDAY");
	days.push_back("FRIDAY");
	days.push_back("SATURDAY");
	days.push_back("SUNDAY");
	int n,k;
	int user_id[n];
	long long int start_epoch[n][n];
	long long int end_epoch[n][n];
	string tempday;
	int number_of_meetings[n];
	cin >> n;
	vector <vector<string>> dayofweek;
	for(int i=0;i<n;i++)
	{
		cin >> user_id[i];
		cin >> tempday;
		busy_day.push_back(tempday);
		cin >> number_of_meetings[i];
		for(int j=0;j<number_of_meetings[i];j++)
		{
			cin >> k;
			cin >> tempday;
			dayofweek[i].push_back(tempday);
			cin >> start_epoch[i][k];
			cin >> end_epoch[i][k];
		}
	}
	
}