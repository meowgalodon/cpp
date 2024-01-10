#include <bits/stdc++.h>

//Tinh tong giai thua S = 1 + 1.2 + 1.2.3 + ... + 1.2.3...n
unsigned long long tongGiaiThua(unsigned long n){
	unsigned long giaithua = 1;
	unsigned long sum = 0;
	for(size_t i = 1; i <= n; i++){
		giaithua *= i;
		sum += giaithua;
	}
	return sum;
}

int main(){
	//Khai bao va nhap so nguyen duong n
	unsigned long n;
	std::cout << "Moi ban nhap so nguyen duong n: ";
	std::cin >> n;
	
	/*long long sum = 0;
	long long giaithua = 1;
	for(size_t i = 1; i <= n; i++){
		giaithua *= i;
		sum += giaithua;
	}*/
	
	// std::cout << "S = " << sum;
	std::cout << "S = " << tongGiaiThua(n);
	return 0;
}
