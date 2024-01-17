#include <bits/stdc++.h>

// Liet ke n so nguyen to dau tien
int main()
{
	long n;
	std::cout << "Moi ban nhap so nguyen duong n: ";
	std::cin >> n;
	
	long count = 0; // Bien dem
	long i = 2; // Bien chay
	
	if(n <= 0)
	{
		std::cout << "Vui long nhap gia tri nguyen duong n!!";
	}
	else
	{
		std::cout << n << " so nguyen to dau tien la: ";
		while(count < n)
		{
			bool isTrue = true;
			for(long j = 2; j <= sqrt(i); j++)
			{
				if(i % 2 == 0)
				{
					isTrue = false;
					break;
				}
			}
			if(isTrue)
			{
				count++;
				std::cout << i << " ";
			}
			i++;
		}
	}
	return 0;
}
