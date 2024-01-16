#include <bits/stdc++.h>

//Kiem tra so nguyen to
int main(){
	long long n;
	std::cout << "Nhap so nguyen duong n: ";
	std::cin >> n;
	
	if(n < 2)
	{
		std::cout << n << " khong phai la so nguyen to!";
	}
	
	else
	{
		for(long long i = 2; i <= sqrt(n); i++)
		{
			if(n % i == 0)
			{
				std::cout << n << " khong phai la so nguyen to!";
				return 0;
			}
		}
		std::cout << n << " la so nguyen to!";
	}
	return 0;
}
