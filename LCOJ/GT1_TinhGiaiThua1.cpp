#include <bits/stdc++.h>

//Tinh giai thua
//Cong thuc: n! = n * (n - 1) * (n - 2) * ... * 2 * 1
//n giam dan den 1 --> cho bien chay i = n va i--, dieu kien i >= 1
int main(){
	//Khai bao va nhap so nguyen duong n
	unsigned long long n;
	std::cin >> n;
	
	//Dung vong lap for de tinh giai thua
	unsigned long long answer = 1;
	for(unsigned long long i = n; i >= 1; i--){
		answer *= i;
	}
	
	std::cout << answer;
	return 0;
}
