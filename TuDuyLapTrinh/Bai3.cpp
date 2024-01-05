#include <bits/stdc++.h>

//Tinh S = 1 + 1/2 + 1/3 + ... + 1/n
int main(){
	//Khai bao va nhap so nguyen duong n
	unsigned int n;
	std::cin >> n;
	
	//Khai bao bien sum va gan 0
	float sum = 0.0;
	
	//Dung vong lap de tinh S
	for(float i = 1; i <= n; i++){
		sum += 1/i;
	}
	std::cout << sum;
	return 0;
}
