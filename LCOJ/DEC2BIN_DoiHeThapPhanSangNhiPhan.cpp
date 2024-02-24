#include <bits/stdc++.h>

// Doi he thap phan sang nhi phan

using namespace std;

string solve(long long int n)
{
	string s = "";
	while (n != 0)
	{
		if (n % 2 == 0)
			s = '0' + s;
		else
			s = '1' + s;
		n /= 2;
	}
	return s;
}

int main()
{
	// Nhap so bo test
	int t;
	cin >> t;
	long long int n;
	while(t--)
	{
		cin >> n;
		cout << solve(n) << endl;
	}
	return 0;
}
