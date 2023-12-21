#include <bits/stdc++.h>
#include <math.h>

using namespace std;

double round_decimal (double num, int n){
	int base = pow(10, n);
	double result = round(num * base) / base;
	return result;
}
int main(){
	double num;
	cin >> num;
	cout << round_decimal(num, 0);
}
