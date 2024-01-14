#include <bits/stdc++.h>

//Bai 9
//Nhap do dai 3 canh 1 tam giac. Kiem tra xem co phai la tam giac hay khong, tinh dien tich
int main(){
	//Khai bao
	double a;
	double b;
	double c;
	
	//Nhap du lieu
	std::cout << "Nhap do dai canh thu 1: ";
	std::cin >> a;
		
	std::cout << "Nhap do dai canh thu 2: ";
	std::cin >> b;
		
	std::cout << "Nhap do dai canh thu 3: ";
	std::cin >> c;
		
	//Dung dieu kien kiem tra tam giac
	if(a > 0 && b > 0 && c > 0){
		if( (a + b > c) && (a + c > b) && (b + c > a) ){
			std::cout << "3 canh tren tao ra 1 tam giac!";
			std::cout << "\n";
			
			double p = (a + b + c) / 2;
			double area = sqrt(p * (p - a) * (p - b) * (p - c));
			std::cout << std::fixed << std::setprecision(2) << "Dien tich cua tam giac la: " << area;
		}
		
		else{
			std::cout << "3 canh tren ko tao ra 1 tam giac!!";
		}
	}
	
	else{
		std::cout << "Xin hay nhap lai do dai cac canh, cac canh phai > 0!";
	}
	return 0;
}
