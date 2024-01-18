#include <bits/stdc++.h>

int main()
{
	double a;
	std::cin >> a;
	
	if(a < 0)
	{
		a *= -1;
	}
	
	double area = (M_PI * a * a) / 2;
	std::cout << std::fixed << std::setprecision(3) << area;
	return 0;
}
