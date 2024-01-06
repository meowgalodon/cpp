#include <bits/stdc++.h>

int main(){
	//Khai bao so nguyen duong n va nhap gia tri
	unsigned long long n;
	std::cout << "Nhap so nguyen duong n: ";
	std::cin >> n;
	
	//Dung vong lap de tinh tong 
	long long sum = 0;
	for(long long i = 1; i <= n; i++){
		sum += i;
	}
	std::cout << sum;
	return 0;
}

