#include <bits/stdc++.h>

//Dem so luong uoc so
int main()
{
	long long n;
	std::cin >> n;
	
	//Kiem tra neu n < 0
	if(n < 0)
	{
		n = abs(n);
	}
	
	//Khai bao bien dem
	long long count = 0;
	
	//Dung vong lap de dem
	for(long long i = 1; i <= n; i++)
	{
		if(n % i == 0)
		{
			count++;	
		}
	}
	
	//Ket qua
	std::cout << count;
	return 0;
}
