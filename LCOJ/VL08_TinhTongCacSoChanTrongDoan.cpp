#include <bits/stdc++.h>

//Tinh tong cac so chan trong doan [a,b]
int main(){
	//Khai bao a b va nhap gia tri
	long long a, b;
	std::cin >> a >> b;
	
	//Dung vong lap de tinh tong cac so chan
	//Khai bao bien tong va gan gia tri 0
	long long sum = 0;
	for(long long i = a; i <= b; i++){
		if(i % 2 == 0){
			sum += i;
		}
	}
	std::cout << sum;
	return 0;
}
