#include <bits/stdc++.h>

using namespace std;

//Kiem tra nam nhuan
int main(){
	//Khai bao nam
	long long year;
	cin >> year;
	
	//Kiem tra gia tri
	if(year <= 0 || year > 100000){
		cout << "INVALID" ;
	}
	if(year > 0 && year <= 100000){
		//Kiem tra nam nhuan
		if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
			cout << "YES" ;
		}
		else{
			cout << "NO" ;
		}
	}
	return 0;
}
