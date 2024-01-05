#include <bits/stdc++.h>

//Tim cac so chan nho hon so cho truoc
int main(){
	//Khai bao va nhap so nguyen duong
	unsigned long long n;
	std::cin >> n;
	
	//Dung vong lap de in ra cac gia tri chan
	for(long long i = 0; i <= n; i++){
		if(i % 2 == 0){
			std::cout << i << " ";
		}
	}
	return 0;
}
