#include <bits/stdc++.h>

int main()
{
	long long a;
	std::cin >> a;
	
	long long b;
	std::cin >> b;
	
	long long count = 0;
	for(long long i = b - 1; i > a; i--)
	{
		if(i % 3 == 0)
		{
			std::cout << i << " ";
			count++;
		}
	}
	if(count == 0)
	{
		std::cout << "NOT FOUND";
	}
	return 0;
}
