#include <bits/stdc++.h>

using namespace std;

//Giai phuong trinh bac nhat
//Phuong trinh bac nhat co dang: ax + b = 0
int main(){
	
	//Khai bao va nhap he so cua phuong trinh
	double a, b;
	cout << "Nhap he so cua x: ";
	cin >> a;
	cout << "Nhap he so tu do: ";
	cin >> b;
	
	//Truong hop vo so nghiem
	if(a == 0 && b == 0){
		cout << "Phuong trinh co vo so nghiem";
	}
		
	//Truong hop vo nghiem
	if(a == 0 && b!= 0){
		cout << "Phuong trinh vo nghiem";
	}
	
	//Truong hop co nghiem
	if(a != 0 && b != 0){
		double x = ( - b ) / a;
		cout << "Nghiem cua phuong trinh la: " << x; 
	}
	return 0;
}
