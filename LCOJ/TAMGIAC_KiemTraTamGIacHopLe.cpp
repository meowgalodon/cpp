#include <bits/stdc++.h>

int main()
{
	long long a;
	std::cin >> a;
	
	long long b;
	std::cin >> b;
	
	long long c;
	std::cin >> c;
	
	if( (a + b > c) && (b + c > a) && (a + c > b) )
	{
		double perimeter = a + b + c;
		double p = 1.0 * (perimeter) / 2;
		double area = 1.0 * sqrt(p * (p - a) * (p - b) * (p - c));
			
		std::cout << perimeter << " " << std::fixed << std::setprecision(2) << area;
	}
	else
	{
			std::cout << "NO";
	}

	return 0;
}
