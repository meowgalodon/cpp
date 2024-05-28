#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double tongCanBacHaiLongNhau(int n)
{
	double sum = sqrt(2);
	for(int i = 1; i < n; ++i)
	{
		sum = sqrt(2 + sum);
	}
	return sum;
}

int main()
{
	int t;
	cin >> t;
	cin.ignore();
	while(t--)
	{
		int n;
		cin >> n;
		cin.ignore();
		cout << fixed << setprecision(5) << tongCanBacHaiLongNhau(n) << "\n";
	}
	return 0;
}
