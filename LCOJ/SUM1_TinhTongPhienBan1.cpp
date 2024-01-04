#include <bits/stdc++.h>

using namespace std;

//Tinh tong S = 1 + 2 + 3 + ... + n
int main(){
	//Khai bao va nhap so nguyen duong n
	unsigned long long n;
	cin >> n;
	
	//Dung vong lap de tinh tong S
	//Khai bao bien sum va gan gia tri 0
	unsigned long long sum = 0;
	for(unsigned long long i = 1; i <= n; i++){
		sum += i;
	}
	cout << sum;
	return 0;
}
