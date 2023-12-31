#include <bits/stdc++.h>
#include <math.h>

using namespace std;


//giai phuong trinh bac nhat: ax + b = 0
int main(){
	double a, b;
	cin >> a >> b;
	//vo so nghiem
	if(a == 0 && b == 0){
		cout << "WOW";
	//vo nghiem
	}if (a == 0 && b != 0){
		cout << "NO";
	//co nghiem
	}if (a != 0 && b != 0){
		double x = (-b) / a;
		cout << fixed << setprecision(2) << x;
	}
}
