#include <bits/stdc++.h>

using namespace std;

//So sanh 2 so nguyen a va b
int main(){
	//Khai bao va nhap a, b
	int a, b;
	cin >> a >> b;
	
	//So sanh a va b
	if(a > b){
		cout << a << " > " << b;
	}
	if(a < b){
		cout << a << " < " << b;
	}
	if(a == b){
		cout << a << " = " << b;
	}
	return 0;
}
