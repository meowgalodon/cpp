#include <bits/stdc++.h>

//Tinh to hop chap k cua n
bool check(long long n, long long k){
	if(1 <= k && k <= n && n  <= 25){
		return 1;
	}
	else{
		return 0;
	}
}

long long giaithua(long long mau){
	long long n = 1;
	for(long long i = 1; i <= mau;  i++){
		n *= i;
	}
	return n;
}

long long tohop(long long n, long long k){
//	long long tu = 1;
//	long long mau = 1;
//	for(long long i = n; i >= (n - k); i--){
//		tu *= i;
//	}
//	for(long long j = k; j >= 1; j--){
//		mau *= j;
//	}
	
	return giaithua(n) / (giaithua(k) * giaithua(n - k));
}

int main(){
	//Khai bao va nhap so nguyen duong n, k
	long long n, k;
	std::cin >> n >> k;
	
	if(check(n,k)) std::cout << tohop(n, k);
	return 0;
}
