#include <bits/stdc++.h>

//Tinh S = 1/2 + 1/3 + 1/4 + ... + 1/n
int main(){
	//Khai bao va nhap so nguyen duong n
	unsigned long long n;
	std::cin >> n;
	
	//Kiem tra n >= 2
	if(n >= 2){
		//Khoi tao bien tong va gan 0
		double sum = 0;
		
		//Dung vong lap de tinh S
		for(double i = 2; i <= n; i++){
			sum += 1/i;
		}
		std::cout << std::fixed << std::setprecision(4) << sum;
	}
	return 0;
}
