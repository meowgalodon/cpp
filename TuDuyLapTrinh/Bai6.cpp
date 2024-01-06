#include <bits/stdc++.h>

//Tinh S = 1/(1*2) + 1/(2*3) + ... + 1/n*(n+1)
int main(){
	double n;
	std::cin >> n;
	
	double sum = 0;
	for(double i = 1; i <= n; i++){
		sum += 1/(i * (i + 1));
	}
	
	std::cout << sum;
	return 0;
}

