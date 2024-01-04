#include <bits/stdc++.h>

using namespace std;

//In ra cac so tu a --> b
int main(){
	
	//Khai bao va nhap a, b
	long long a, b;
	cin >> a >> b;
	
	//Dung vong lap de in cac so tu a --> b
	//Truoc tien kiem tra dieu kien cho a voi b
	if(a < b){
		//Neu a < b thi in ra cac so tu a --> b
		for(int i = a; i <= b; i++){
			cout << i << " ";
		}
	}
	if(a > b){
		//Neu a > b thi in ra cac so tu b --> a
		for(int i = b; i <= a; i++){
			cout << i << " ";
		}
	}
	if(a == b){
		//Neu a = b thi in ra a hoac b
		cout << a;
	}
	return 0;
}
