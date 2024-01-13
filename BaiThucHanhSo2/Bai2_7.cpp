#include <bits/stdc++.h>

// Liet ke uoc cua 1 so
int main(){
	long n;
	std::cout << "Moi ban nhap so nguyen n: ";
	std::cin >> n;
	
	// Dung vong lap de tim uoc
	std::cout << "Uoc cua n la: ";
	for(long i = 1; i <= n; i++){
		if(n % i == 0){
			std::cout << i << " ";
		}
	}
	return 0;
}
