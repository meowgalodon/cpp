#include <bits/stdc++.h>
#include <string.h>

// Tim so dao nguoc
// Vi du: 1234 --> 4321
// Y tuong: 1234 % 10 = 4 * 10 + 3 = 43 * 10 + 2 = 432 * 10 + 1 = 4321
//		->	123	 % 10 = 3
//		-> 	12	 % 10 = 2
// 		-> 	1	 % 10 = 1
//		-> 	0 la dieu kien dung 


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
