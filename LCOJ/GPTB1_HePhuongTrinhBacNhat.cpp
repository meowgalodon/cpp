#include <bits/stdc++.h>

// Giai he phuong trinh bac nhat

int main()
{
	// Nhap cac he so cua he phuong trinh
	long a1;
	std::cin >> a1;
	long b1;
	std::cin >> b1;
	long c1;
	std::cin >> c1;
	long a2;
	std::cin >> a2;
	long b2;
	std::cin >> b2;
	long c2;
	std::cin >> c2;
	
	// Tinh dinh thuc
	long det = a1 * b2 - a2 * b1;
	long detX = c1 * b2 - c2 * b1;
	long detY = a1 * c2 - a2 * c1;
	
	// Kiem tra va xuat ket qua
	if(det == 0)
	{
		// Vo so nghiem
		if(detX == 0)
			std::cout << "VOSONGHIEM" << std::endl;
		// Vo nghiem
		else
			std::cout << "VONGHIEM" << std::endl;
		
	}
	else
	{
		double x = static_cast<double>(detX) / static_cast<double>(det);
		double y = static_cast<double>(detY) / static_cast<double>(det);
		std::cout << std::fixed << std::setprecision(2) << x << " " << y << std::endl;
	}
	
	return 0;
}
