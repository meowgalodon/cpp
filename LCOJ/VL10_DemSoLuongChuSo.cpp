#include <bits/stdc++.h>

int main()
{
	std::string n;
	std::getline(std::cin, n);
	
	long count = n.length();
	while(n[0] == '-')
	{
		n.erase(n.begin());
		count--;
	}
	
	std::cout << count;
	return 0;
}
