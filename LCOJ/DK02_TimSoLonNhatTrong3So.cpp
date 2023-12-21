#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main(){
	long long a, b, c;
	cin >> a >> b >> c;
	long long max = a;
	if (max < b){
		max = b;
	}if(max < c){
		max = c;
	}
	cout << max;
	return 0;
}
