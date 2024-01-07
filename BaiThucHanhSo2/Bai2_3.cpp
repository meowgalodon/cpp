#include <bits/stdc++.h>

//Tinh S = 1 + 1/2 + 1/3 + ... + 1/n 
int main(){
	//Khai bao va nhap so nguyen n
	unsigned long long n;
	std::cout << "Moi ban nhap so nguyen duong n: ";
	std::cin >> n;
	
	//Khai bao bien tong va gan 0
	//Dung vong lap de tinh S
	double sum = 0;
	for(double i = 1; i <= n; i++){
		sum += 1/i;
	}
	
	//In ket qua ra man hinh
	std::cout << "Tong cap so cong dao la: " << sum;
	return 0;
}
