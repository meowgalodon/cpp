#include <bits/stdc++.h>

//Tinh tong cac so tu nhien khong lon hon n va chia het cho k
//Sum int < n && int % k == 0
int main(){
	//Khai bao 
	unsigned long n, k;
	std::cout << "Moi ban nhap so nguyen duong n: ";
	std::cin >> n;
	std::cout << "Moi ban nhap so nguyen duong k: ";
	std::cin >> k;
	
	long sum = 0;
	for(unsigned long i = 1; i <= n; i++){
		if(i % k == 0){
			sum += i;
		}
	}
	
	std::cout << "S = " << sum;
	return 0;
}
