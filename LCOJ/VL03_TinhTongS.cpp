#include <bits/stdc++.h>

//Tinh S = (2 + 3 + 4 + ... + n) + 2n
int main(){
	//Khai bao va nhap so nguyen duong n
	unsigned long long n;
	std::cin >> n;
	
	//Kiem tra n >= 2
	if(n >= 2){
		//Khai bao bien sum va gan gia tri 0
		long long sum = 0;
		
		//Dung vong lap de tinh S
		for(long long i = 2; i <= n; i++){
			sum += i;
		}
		
		//Cong them 2n vao sum
		sum += 2*n;
		std::cout << sum;
	}
	return 0;
}
