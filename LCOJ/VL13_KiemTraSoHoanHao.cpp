#include <bits/stdc++.h>

// Kiem tra so hoan hao. Vi du: 6 = 1 + 2 + 3 
int main(){
	long long n;
	std::cin >> n;
	
	long long sum = 0;
	for(long long i = 1; i < n; i++){
		if(n % i == 0){ // Tim cac uoc cua so nguyen n
			sum += i;
		}
	}
	
	// Thoat vong lap de kiem tra tong cac uoc == voi so nguyen n?
	if(sum == n){
		std::cout << "YES";
	}	
	if(sum != n){
		std::cout << "NO";
	}
	return 0;
}
