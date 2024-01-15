#include <bits/stdc++.h>

//giai phuong trinh: ax^2 + bx + c = 0
int main()
{
	//Khai bao bien va nhap du lieu
	/*float x1, x2;
	long a, b, c;*/
	double a;
	double b;
	double c;
	double x1;
	double x2;
	
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	
	//Cac truong hop dac biet
	if(a == 0 && b == 0 && c == 0)
	{
		std::cout << "WOW" ;
	}
	else if(a == 0 && b == 0 && c != 0)
	{
		std::cout << "NO" ;
	}
	else if(a == 0 && b != 0 && c == 0)
	{
		x1 = float( 0 / b );
		std::cout << std::fixed << std::setprecision(2) << x1;
	}
	else if(a == 0 && b != 0 && c != 0)
	{
		x1 = float( ( -c ) / b );
		std::cout << std::fixed << std::setprecision(2) << x1;
	}
	
	else
	{
		//Khai bao bien delta
		double delta = pow(b, 2) - (4 * a * c);
	
		//Xet cac truong hop cua delta
		if(delta < 0)
		{
			std::cout << "NO";
		}
		else if(delta == 0)
		{
			x1 = float((- b ) / (2 * a));
			std::cout << std::fixed << std::setprecision(2) << x1;
		}
		else
		{
			x1 = float((- b + sqrt(delta) ) / (2 * a));
			x2 = float((- b - sqrt(delta) ) / (2 * a));
		
			//Sap xep nghiem theo thu tu tang dan
			if(x1 < x2)
			{
				std::cout << std::fixed << std::setprecision(2) << x1 << " " << x2;
			}
			if(x1 > x2)
			{
				std::cout << std::fixed << std::setprecision(2) << x2 << " " << x1;
			}
		}
	}		
	return 0;
}
