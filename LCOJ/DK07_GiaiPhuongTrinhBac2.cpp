#include <bits/stdc++.h>
#include <math.h>
#include <iostream>
#include <cmath>

using namespace std;

//giai phuong trinh: ax^2 + bx + c = 0
int main(){
	//Khai bao bien va nhap du lieu
	/*float x1, x2;
	long a, b, c;*/
	double a, b, c, x1, x2;
	cin >> a >> b >> c;
	
	//Cac truong hop dac biet
	if(a == 0 && b == 0 && c == 0){
		cout << "WOW" ;
	}
	if(a == 0 && b == 0 && c != 0){
		cout << "NO" ;
	}
	if(a == 0 && b != 0 && c == 0){
		x1 = float( 0 / b );
		cout << fixed << setprecision(2) << x1;
	}
	if(a == 0 && b != 0 && c != 0){
		x1 = float( ( -c ) / b );
		cout << fixed << setprecision(2) << x1;
	}
	//Khai bao bien delta
	double delta = pow(b, 2) - (4 * a * c);
	
	//Xet cac truong hop cua delta
	if(delta < 0){
		cout << "NO";
	}
	if(delta == 0){
		x1 = float((- b ) / (2 * a));
		cout << fixed << setprecision(2) << x1;
	}
	if(delta > 0){
		x1 = float((- b + sqrt(delta) ) / (2 * a));
		x2 = float((- b - sqrt(delta) ) / (2 * a));
		
		//Sap xep nghiem theo thu tu tang dan
		if(x1 < x2){
			cout << fixed << setprecision(2) << x1 << " " << x2;
		}
		if(x1 > x2){
			cout << fixed << setprecision(2) << x2 << " " << x1;
		}
	}
	return 0;
}
