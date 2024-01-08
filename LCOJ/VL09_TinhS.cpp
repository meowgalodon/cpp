#include <bits/stdc++.h>

//Tinh S = x + x^2/2! + x^3/3! + ... + x^n/n! 
long long factorial(int n){
	if(n == 1 || n == 0){
		return 1;
	}
	else{
		return n * factorial(n - 1);
	}
}

int main(){
	//Khai bao
	double x;
	unsigned long long n;
	std::cin >> x >> n;
	
	//Tinh S
	double answer = 0;
	for(double i = 1; i <= n; i++){
		answer += pow(x, i) / factorial(i);
	}
	
	//In ket qua
	std::cout << std::fixed << std::setprecision(2) << answer;
}
