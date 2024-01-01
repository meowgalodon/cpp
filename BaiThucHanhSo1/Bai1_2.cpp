#include <bits/stdc++.h>

using namespace std;

//Kiem tra tinh chan le cua 1 so nguyen, am duong
int main(){
	
	//Khai bao va nhap bien
	int n;
	cout << "Nhap so nguyen: ";
	cin >> n;

	//Kiem tra tinh am duong
	if (n > 0){
		cout << n << " la so duong" << endl;
	}
	if (n < 0){
		cout << n << " la so am" << endl;
	}
	if (n == 0){
		cout << n << " la so khong am khong duong" << endl;
	}
	
	//Kiem tra tinh chan le
	if (n % 2 == 0){
		cout << n << " la so chan";
	}
	if (n % 2 != 0){
		cout << n << " la so le";
	}
	return 0;
} 
