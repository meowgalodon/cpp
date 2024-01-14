#include <bits/stdc++.h>

//Bai 4 
//Giai phuong trinh bac 2: ax^2 + bx + c = 0
int main(){
	//Khai bao
	double a;
	double b;
	double c;
	double x1;
	double x2;
	
	//Nhap du lieu
	std::cout << "Nhap he so cua x^2: ";
	std::cin >> a;
	
	std::cout << "Nhap he so cua x: ";
	std::cin >> b;
	
	std::cout << "Nhap he so tu do: ";
	std::cin >> c;
	
	//Kiem tra cac truong hop dac biet
	if(a == 0 && b == 0 && c == 0){
		std::cout << "Phuong trinh da cho vo so nghiem!";
	}
	
	else if(a == 0 && b == 0 && c != 0){
		std::cout << "Phuong trinh da cho vo nghiem!";
	}
	
	else if(a == 0 && b != 0 && c != 0){
		x1 = (-c) / b;
		std::cout << std::fixed << std::setprecision(2) <<"Nghiem cua phuong trinh da cho la: " << x1;
	}
	
	else if(a == 0 && b != 0 && c == 0){
		x1 = 0 / b;
		std::cout << std::fixed << std::setprecision(2) << "Nghiem cua phuong trinh da cho la: " << x1;
	}
	
	else{
		//Tinh delta
		double delta = pow(b, 2) - (4 * a * c);
		if(delta > 0){
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);
			
			if(x1 > x2){
				std::cout << std::fixed << std::setprecision(2) << "Phuong trinh co 2 nghiem phan biet: " << x2 << ", " << x1;			
			}
			
			else{
				std::cout << std::fixed << std::setprecision(2) << "Phuong trinh co 2 nghiem phan biet: " << x1 << ", " << x2;
			}
		}
		
		else if(delta == 0){
			x1 = (-b) / (2 * a);
			std::cout << std::fixed << std::setprecision(2) << "Phuong trinh co nghiem kep: " << x1;
		}
		
		else{
			std::cout << "Phuong trinh vo nghiem!";
		}
	}
	return 0;
}
