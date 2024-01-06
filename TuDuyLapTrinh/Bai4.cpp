#include <bits/stdc++.h>

//Tinh S = 1/2 + 1/4 + 1/6 + ... + 1/2n
int main(){
	double n;
	std::cin >> n;
	
	double sum = 0;
	for(double i = 1; i <= n; i++){
		sum += 1 / (2 * i);
	}
	std::cout << sum;
	return 0;
}
