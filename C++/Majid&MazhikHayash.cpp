#include <iostream>
#include <array>
using namespace std;
int main()
{
	int n,i=0,temp,min,mincount;
	std::array <int, 101> numbers;
	numbers.fill(0);
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> temp;
		numbers[temp]++;
	}
	min=0;
	mincount=10000000;
	for(i=1;i<=100;i++)
	{
		if(mincount>numbers[i] && numbers[i]!=0)
		{
			mincount=numbers[i];
			min=i;
		}
		else if(mincount==numbers[i] && numbers[i]!=0)
		{
			if(i<min)
			{
				min=i;
			}
			else if(i>min)
			{
				min=min;
			}
		}
	}
	cout << min;
}