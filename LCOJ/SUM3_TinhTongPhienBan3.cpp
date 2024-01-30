#include <bits/stdc++.h>

// Tinh tong: S = 1 / 1 x 2 + 1 / 2 x 3 + ... + 1 / n x (n + 1)
int main()
{
	unsigned long long n;
	std::cin >> n;
	
	double sum = 0;
	for(double i = 1; i <= n; i++)
	{
		sum += 1 / (i * (i + 1));
	}
	
	std::cout << std::fixed << std::setprecision(5) << sum;
	return 0;
}
