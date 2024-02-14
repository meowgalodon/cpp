#include <bits/stdc++.h>

// Tinh tong phien ban 4

using namespace std;

long long t;
long long n;

long long tong(int n)
{
	long long sum = ((n + 1) * n) / 2;
	return sum;
}

int main()
{
	cin >> t;
	while(t--)
	{
		cin >> n;
		double s = 0;
		s = 2.0 - 2.0 / (n + 1);
		cout << fixed << setprecision(8) << s << endl;
	}
	return 0;
}
