#include <bits/stdc++.h>

// Liet ke uoc cua 1 so, dem xem co bao nhieu uoc
int main(){
	long n;
	std::cout << "Moi ban nhap so nguyen n: ";
	std::cin >> n;
	
	//Khai bao 1 bien dem
	long count = 0;
	// Dung vong lap de tim uoc
	std::cout << "Uoc cua n la: ";
	for(long i = 1; i <= n; i++){
		if(n % i == 0){
			count++;
			std::cout << i << " ";
		}
	}
	std::cout << "\n";
	std::cout << n << " co " << count << " uoc";
	return 0;
}
