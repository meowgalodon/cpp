#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main(){
	long long n, x;
	cin >> n;
	x = sqrt(n);
	if (x * x == n){
		cout << "YES";
	}else{
		cout << "NO";
	}
	return 0;	
}
