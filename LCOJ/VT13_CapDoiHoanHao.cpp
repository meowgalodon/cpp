#include <bits/stdc++.h>

using namespace std;

int main()
{
	long n;
	cin >> n;
	long a[n];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	
	long x = a[0] + a[n - 1];
	long y = a[0];
	long z = a[n - 1];
	for(long i = 1; i < n - 1; i++)
	{
		if(x < a[i] + a[i + 1])
		{
			x = a[i] + a[i + 1];
			y = a[i];
			z = a[i + 1];
		}
	}
	
	if(x == a[0] + a[n - 1])
	{
		cout << z << " " << y;
	}
	else
	{
		cout << y << " " << z;	
	}
	return 0;
}
