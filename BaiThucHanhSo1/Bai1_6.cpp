#include <bits/stdc++.h>

using namespace std;

//Tinh chu vi va dien tich hinh chu nhat
int main(){
	long long dai, rong;
	cout << "Nhap chieu dai: ";
	cin >> dai;
	cout << "Nhap chieu rong: ";
	cin >> rong;
	if(dai > rong && dai > 0 && rong > 0){
		cout << "Chu vi hinh chu nhat la: " << 2 * (dai + rong) << endl;
		cout << "Dien tich hinh chu nhat la: " << dai * rong;		
	}
	else{
		cout << "Moi ban nhap lai chieu dai va chieu rong!";
	}
	return 0;
}
