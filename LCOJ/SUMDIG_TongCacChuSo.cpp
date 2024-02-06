#include <bits/stdc++.h>

// Tinh tong cac chu so

using namespace std;

long long t;
long long n;
long long sum;

void solve()
{
	cin >> t;
	while(t--)
	{
		sum = 0;
		cin >> n;
		while(n != 0)
		{
			sum += n % 10;
			n /= 10;
		}
		cout << sum << "\n";
	}
}

main()
{	
	solve();
}
