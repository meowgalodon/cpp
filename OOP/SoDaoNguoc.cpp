#include <bits/stdc++.h>

//In so dao nguoc

int soDaoNguoc(int n)
{
	int m = 0;
	while(n > 0)
	{
		m = (m * 10) + (n % 10);
		n /= 10;
	}
	return m;
}

int main()
{
	int a;
	std::cout << "Moi nhap so tu nhien a: ";
	std::cin >> a;
	
	std::cout << "So dao nguoc cua " << a << " la: " << soDaoNguoc(a);
	return 0;
}
