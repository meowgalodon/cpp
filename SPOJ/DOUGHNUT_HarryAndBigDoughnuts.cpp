#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	int c;
	int k;
	int w;
	while(t--)
	{
		cin >> c;
		cin >> k;
		cin >> w;
		if(c * w <= k)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	return 0;
}
