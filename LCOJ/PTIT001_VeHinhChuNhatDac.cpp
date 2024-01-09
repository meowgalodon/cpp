#include <bits/stdc++.h>

int main(){
	unsigned long long n;
	std::cin >> n;
	
	for(unsigned long long i = 0; i < n; i++){
		for(unsigned long long j = 0; j < n; j++){
			std::cout << "*";
		}
		std::cout << "\n";
	}
	return 0;
}
