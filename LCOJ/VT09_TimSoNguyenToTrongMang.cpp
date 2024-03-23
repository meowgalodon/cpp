#include <bits/stdc++.h>

using namespace std;

int n;
long a[10000];

void input()
{
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}

void sort()
{
	int temp = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

bool checkPrime(int n)
{
	if(n < 2) return false;
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		{
			return false;
		}
	}
	return true;
}

void solve(long a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		if(a[i] == a[i+1]) a[i] = 0;
		if(checkPrime(a[i]))
		{
			cout << a[i] << " ";
		}
	}
}

int main()
{
	cin >> n;
	input();
	sort();
	checkPrime(n);
	solve(a, n);
	return 0;
}
