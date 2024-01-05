#include <bits/stdc++.h>

//Tinh S = 1 + 3 + 5 + ... + (2n + 1)
int main(){
	//Khai bao va nhap so nguyen duong n
	unsigned int n;
	std::cin >> n;
	
	//Khai bao bien sum va gan 0
	int sum = 0;
	
	//Dung vong lap de tinh S
	for(int i = 0; i <= n; i++){
		sum = sum + (2*i + 1);
	}
	
	//Xuat gia tri sum
	std::cout << sum;
	return 0;
}
