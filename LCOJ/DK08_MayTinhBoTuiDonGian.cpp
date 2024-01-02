#include <bits/stdc++.h>

using namespace std;

int main(){
	//Khai bao bien va toan tu
	double a, b;
	char op;
	cin >> a >> op >> b;
	
	//Cac truong hop voi switch case
	switch(op){
		case '+':
		{
			cout << fixed << setprecision(2) << a + b;
			break;
		}
		case '-':
		{
			cout << fixed << setprecision(2) << a - b;
			break;
		}
		case '*':
		{
			cout << fixed << setprecision(2) << a * b;
			break;
		}
		case '/':
		{
			if(b == 0){
				cout << "Math Error";
			}
			else{
				cout << fixed << setprecision(2) << a / b;
			}
			break;
		}
	}
	return 0;	
}
