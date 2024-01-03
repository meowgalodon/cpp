#include <bits/stdc++.h>
#include <cmath>
#include <math.h>

using namespace std;

//Tinh chu vi va dien tich hinh tron
int main(){
	long long bankinh;
	cout << "Nhap ban kinh hinh tron: ";
	cin >> bankinh;
	if(bankinh > 0){
		cout << "Chu vi hinh tron la: " << 2 * M_PI * bankinh << endl;
		cout << "Dien tich hinh tron la: " << M_PI * pow(bankinh, 2);
	}
	else{
		cout << "Moi ban nhap lai ban kinh!";
	}
	return 0;
}
