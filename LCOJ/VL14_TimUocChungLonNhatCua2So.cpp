#include <bits/stdc++.h>
#include <algorithm>

//Tim uoc chung lon nhat cua 2 so
//int UCLN(long a, long b)
//{
//
//	if(a == 0 && b == 0)
//	{
//		return 0;
//	}
//	
//	else if(a == 0 || b == 0)
//	{
//		return a + b;
//	}
//	
//	else
//	{	
//		long hcf = 1;
//		for(long i = 1; i <= a || i <= b; i++)
//		{
//			if(a % i == 0 && b % i == 0)
//			{
//				hcf = i;
//			}
//		}
//		return hcf;
//	}
//}

int main()
{
	//Khai bao
	long a;
	long b;
	
	//Nhap gia tri
	std::cin >> a;
	std::cin >> b;
	
	//Dung vong lap
	while(b != 0)
	{
		a = abs(a);
		b = abs(b);
		long temp = a % b;
		a = b;
		b = temp;
	}
	//Ket qua
//	std::cout << UCLN(a, b);
	std::cout << a;
	return 0;
}
