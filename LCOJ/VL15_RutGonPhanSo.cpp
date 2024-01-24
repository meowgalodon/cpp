#include <iostream>
#include <cmath>

// Rut gon phan so: a / b
// Input: tu so a, mau so b la cac so nguyen
// Rang buoc: Neu phan so duoc yeu cau khong hop le --> INVALID
//			  Neu c = a / b la so nguyen --> in c ra
//			  Truong hop khac, in tu va mau cua phan so toi gian, cach nhau 1 dau cach
//			  Vi du: 4 / -8 --> -1 / 2 --> 1 -2
//					 2 / 2  -->  1
//					 4 / 1  -->  4
//					 2 / 1  -->  2
//					 a = n * b (a la tu so, b la mau so) --> in ra c = a / b

int ucln(int a, int b)
{
	while(b != 0)
	{
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main()
{
	int a;
	std::cin >> a;
	int b;
	std::cin >> b;
	
	// kiem tra dieu kien INVALID
	if((b == 0) || (a == 0 && b == 0))
	{
		std::cout << "INVALID";
	}
	
	// gan 1 bien ngau nhien mang gia tri cua phan so a / b
	else if(a % b == 0)
	{
		std::cout << a / b;
	}
	
	else
	{
		int c = ucln(a, b);
		if((a < 0 && b > 0) || (a > 0 && b < 0))
		{
			std::cout << (a / c) * (- 1) << " " << abs((b / c));
		}
		else
		{
			std::cout << (a / c) << " " << abs((b / c));
		}
	}
	return 0;
}
