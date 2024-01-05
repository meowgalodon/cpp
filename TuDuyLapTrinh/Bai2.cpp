#include <bits/stdc++.h>

//Tinh S = 1^2 + 2^2 + 3^2 + ... + n^2
int main(){
	//Khai bao va nhap so nguyen duong n
	unsigned int n;
	std::cin >> n;
	
	//Khai bao bien tong va gan 0
	int sum = 0;
	
	//Dung vong lap de tinh S
	for(int i = 1; i <= n; i++){
		sum += i*i;
	}
	
	//Xuat gia tri sum
	std::cout << sum;
	return 0;
}
