#include <bits/stdc++.h>

//Tinh tong cap so cong chan - le
int main(){
	unsigned long long n;
	std::cout << "Moi ban nhap so nguyen duong n: ";
	std::cin >> n;
	
	unsigned long long tongchan = 0;
	unsigned long long tongle = 0;
	
	for(long long i = 0; i <= n; i++){
			tongchan += 2 * i;
	}
	for(long long i = 1; i <= n; i++){
			tongle += (2 * i) + 1;
	}
	
	std::cout << "Tong cap so cong chan la: " << tongchan << std::endl;
	std::cout << "Tong cap so cong le la: " << tongle;
	return 0;
}
