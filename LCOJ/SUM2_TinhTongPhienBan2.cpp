#include <bits/stdc++.h>

// Tinh tong: S = 1^2 + 2^2 + ... + n^2
int main()
{
	long n;
	std::cin >> n;
	
	long long sum = 0;
	for(long i = 1; i <= n; i++)
	{
		sum += i * i;
	}
	
	std::cout << sum;
	return 0;
}
