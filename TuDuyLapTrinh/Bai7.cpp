#include <bits/stdc++.h>

//Tinh S = 1/2 + 2/3 + 3/4 + ... + n/(n + 1)
int main(){
	//Khai bao va nhap so nguyen duong n;
	unsigned long long n;
	std::cout << "Moi ban nhap so nguyen duong n: ";
	std::cin >> n;
	
	//Khai bao bien tong va gan gia tri
	double sum = 0;
	
	//Dung vong lap de tinh S
	for(double i = 1; i <= n; i++){
		sum += i / (i + 1);
	}
	
	//In ket qua
	std::cout << "S = " << sum;
	return 0;
}
