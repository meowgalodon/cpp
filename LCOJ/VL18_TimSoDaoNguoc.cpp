#include <bits/stdc++.h>
#include <string.h>

int main()
{
	std::string str;
	std::cin >> str;
	
	size_t i = 0;
	reverse(str.begin(), str.end());
	while(i < str.length() && str[i] == '0')
	{
		i++;
	}
	
	if(i < str.length())
	{
		str.erase(0, i);
	}
	else
	{
		str = "";
	}
	std::cout << str;
	
	return 0;
}
