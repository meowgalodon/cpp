#include <bits/stdc++.h>

//Tinh S = 1 + 1/3 + 1/5 + ... + 1/(2n + 1)
int main(){
	double n;
	std::cin >> n;
	
	double sum = 0;
	for(double i = 0; i <= n; i++){
		sum += 1/(2*i + 1);
	}
	
	std::cout << sum;
	return 0;
}
