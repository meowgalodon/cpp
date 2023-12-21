#include <bits/stdc++.h>

using namespace std;

int main(){
	long long a, b;
	cin >> a >> b;
	long long module;
	if (a > b){
		module = a - b;
	}if (a == b){
		module = 0;
	}if (a < b){
		module = b - a;
	}
	cout << module;
	return 0;
}
