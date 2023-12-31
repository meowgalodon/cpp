#include <bits/stdc++.h>
#include <math.h>

using namespace std;

//giai phuong trinh: ax^2 + bx + c = 0
int main(){
	long long a, b, c;
	cin >> a >> b >> c;
	long long delta = (b * b) - (4 * a * c);
	
	//vo so nghiem
	if(a == 0 && b == 0 && c == 0){ 
		cout << "WOW";
	}
	//vo nghiem
	if (a == 0 && b == 0 && c != 0){ 
		cout << "NO";
	}
	//co 2 nghiem phan biet
	if (delta > 0 && a != 0){ 
		double x1 = (-b + sqrt(delta)) / (2 * a);
		double x2 = (-b - sqrt(delta)) / (2 * a);
		//sap xep theo thu tu tang dan
		if(x1 < x2){ 
			cout << fixed << setprecision(2) << x1 << " " << x2;	
		}else{
			cout << fixed << setprecision(2) << x2 << " " << x1;
		}
	}
	//co nghiem kep	
	if (delta == 0){ 
		double x1 = (-b) / (2 * a);
		cout << fixed << setprecision(2) << x1;
	}
}
