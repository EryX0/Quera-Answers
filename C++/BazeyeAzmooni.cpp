#include <iostream>
using namespace std;
int main()
{
	int x,l,f,s,remain;
	cin >> s >> f >> l >> x;
	if(x<s)
	{
		cout << "exam did not started!";
	}
	else if(x>=f)
	{
		cout << "exam finished!";
	}
	else
	{
		remain=f-x;
		if(remain>l)
		{
			cout << l;
		}
		else cout << remain;
	}
}