#include <bits/stdc++.h>

//Tinh S = 1/2 + 3/4 + 5/6 + ... + (2n + 1)/(2n + 2)
int main(){
	unsigned long long n;
	std::cout << "Moi ban nhap so nguyen duong n: ";
	std::cin >> n;
	
	double sum = 0;
	for(double i = 0; i <= n; i++){
		sum += (2 * i + 1)/(2 * i + 2);
	}
	
	std::cout << "S = " << sum;
	return 0;
}
