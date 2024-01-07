#include <bits/stdc++.h>

//Tinh S = 1^3 + 2^3 + 3^3 + ... + n^3
int main(){
	unsigned long long n;
	std::cout << "Moi ban nhap so nguyen duong n: ";
	std::cin >> n;
	
	long long answer = 0;
	for(long long i = 1; i <= n; i++){
		answer += pow(i, 3);
	}
	
	std::cout << "S = " << answer;
	return 0;
}
