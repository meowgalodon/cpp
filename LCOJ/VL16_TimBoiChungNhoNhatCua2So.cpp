#include <bits/stdc++.h>

//Tim boi chung nho nhat cua 2 so
int ucln(int a, int b)
{
	if(b == 0)
	{
		return a;	
	}	
	return ucln(b, a % b);
}

int main()
{
	int a;
	int b;
	std::cin >> a;
	std::cin >> b;
	
	if(a % b == 0)
	{
		std::cout << a;
	}
	else
	{
		int bcnn = abs((a * b) / ucln(a, b));
		std::cout << bcnn;
	}
	return 0;
}
