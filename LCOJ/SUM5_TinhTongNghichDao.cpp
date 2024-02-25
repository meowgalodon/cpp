#include <bits/stdc++.h>

// Tinh tong nghich dao

using namespace std;

vector <long double> a(1000001);

void solve()
{
	a[0] = 0.00000;
	for(long long i = 1; i <= 1000000; i++)
	{
		a[i] = a[i - 1] + (double)1 / i;
	}
}

int main()
{
	solve();
	
	// Khai bao va nhap so bo test
	unsigned int t;
	cin >> t;
	
	// Khai bao so nguyen
	long long n;	
	while(t--)
	{
		// Nhap so nguyen can tinh
		cin >> n;
		cout << fixed << setprecision(5) << a[n] << endl;
	}	
	return 0;
}
