#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int d;
	cin >> d;

	if(d == 0)
	{
		for(int i = 1; i <= n; i++)
		{
			cout << i << " ";
		}
		cout << endl;
		return 0;
	}

	if(d <= n)
	{
		cout << -1 << endl;
		return 0;
	}

	vector<int> a(n);
	for(int i = 0; i < n; i++)
	{
		a[i] = i + 1;
	}

	vector<int> b(n);
	for(int i = 0; i < n; i++)
	{
		b[i] = a[(i + d) % n]; 
	}

	for(int i = 0; i < n; i++)
	{
		cout << b[i] << " ";
	}
	return 0;
}
