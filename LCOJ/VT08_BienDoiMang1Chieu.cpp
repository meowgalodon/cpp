#include <bits/stdc++.h>

// Bien doi mang 1 chieu

using namespace std;

void input(long a[], long n)
{
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}

void solve(long a[], long n)
{
	for(int i = 0; i < n; i++)
	{
		if(i % 2 != 0)
		{
			a[i] += abs(a[i - 1] - a[i + 1]);
		}
	}
}

int main()
{
	long a[1000000];
	long n;
	cin >> n;
	
	input(a, n);
	solve(a, n);
	
	for(int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}
