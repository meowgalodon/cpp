#include <bits/stdc++.h>

using namespace std;

// Thuat toan so nguyen to

int main()
{
	int n;
	cin >> n;
	bool check[n + 1];
	for(int i = 2; i <= n; i++)
	{
		check[i] = true;
	}
	
	for(int i = 2; i <= n; i++)
	{
		if(check[i] == true)
		{
			for(int j = 2 * i; j <= n; j += i)
			{
				check[j] = false;
			}
		}
	}
	
	for(int i = 2; i <= n; i++)
	{
		if(check[i] == true) cout << i << " ";
	}
	return 0;
}
