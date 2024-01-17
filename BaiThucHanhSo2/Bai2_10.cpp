#include <bits/stdc++.h>

//Phan tich 1 so thanh thua so nguyen to
//Vi du: 128 = 2 x 2 x 2 x 2 x 2 x 2 x 2
int main()
{
	int n;
	std::cout << "Moi ban nhap so nguyen duong n: ";
	std::cin >> n;
	int temp = n;
	
	if(n < 0)
	{
		n *= -1;	
	}
	
	std::cout << temp << " = ";
	int i = 2;
	while (n != 1)
	{
		if(n % i == 0)
		{
			std::cout << i;
			if(n != i)
			{
				std::cout << " x ";	
			}
			else
			{
				std::cout << std::endl;
			}
			n /= i;
		}
		else
		{
			i++;
		}	
	}
	return 0;
}
