#include <bits/stdc++.h>

void uoc(long long n){
	for(long long i = n; i >= 1; i--){
		if(n % i == 0){
			std::cout << i << " ";
		}
	}
}
int main(){
	long long n;
	std::cin >> n;
	
	n = abs(n);
	if(n > 0){
		uoc(n);
	}
	else{
		std::cout << "INF";
	}
	return 0;
}
