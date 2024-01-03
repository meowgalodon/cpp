#include <bits/stdc++.h>

using namespace std;

//Tim so ngay cua thang
//Thang co 30 ngay la: 4, 6, 9, 11
//Thang co 31 ngay la: 1, 3, 5, 7, 8, 10, 12
//Thang 2 nam khong nhuan: 28 ngay
//Thang 2 nam nhuan: 29 ngay
int main(){
	//Khai bao va nhap nam + thang
	long long month, year;
	cin >> month >> year;
	
	//Kiem tra thang + nam kh hop le
	if(month < 1 || month > 12 || year <= 0){
		cout << "INVALID" ;
	}
	
	//Dung switch case cho cac truong hop cua thang
	if(month >= 1 && month <=12 && year > 0){
		if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
			cout << "31";
		}
		if(month == 4 || month == 6 || month == 9 || month == 11){
			cout << "30";
		}
		if(month == 2){
			if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
				cout << "29";
			}
			else{
				cout << "28";
			}
		}	
	}
	return 0;
}
