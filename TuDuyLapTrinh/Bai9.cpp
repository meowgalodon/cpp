#include <bits/stdc++.h>

//Tinh T = 1 x 2 x 3 x ... x n
//--> Giai thua 
int main(){
	unsigned long long n;
	std::cout << "Moi ban nhap so nguyen duong n: ";
	std::cin >> n;
	
	long long answer = 1;
	
	for(long long i = n; i >= 1; i--){
		answer *= i;
	}
	
	std::cout << "T = " << answer;
	return 0;
}
