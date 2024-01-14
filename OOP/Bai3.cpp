#include <bits/stdc++.h>

//Bai 3 
//Giai phuong trinh bac 1: ax + b = 0
int main(){
	double a;
	double b;
	std::cout << "Nhap he so cua x: ";
	std::cin >> a;
	std::cout << "Nhap he so tu do: ";
	std::cin >> b;
	double x;
	
	if(a == 0 && b == 0){
		std::cout << "Phuong trinh co vo so nghiem!";
	}
	else if(a == 0 && b != 0){	
		std::cout << "Phuong trinh vo nghiem!";
	}
	else{
		x = (-b) / a;
		std::cout << std::fixed << std::setprecision(2) << "Nghiem cua phuong trinh la: " << x; 
	}
	return 0;
}
