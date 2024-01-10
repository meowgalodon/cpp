#include <bits/stdc++.h>

//Kiem tra so nguyen to
//PRIME NUMBER
bool check(long long n){
	if(n < 2){
		return false;
	}
	else{
		for(long long i = 2; i <= sqrt(n); i++){
			if(n % i == 0){
				return false;
			}
		}
		return true;
	}	
}

int main(){
	long long n;
	std::cin  >> n;
	
//	long long count = 0;
//	for(long long i = 1; i <= n; i++){
//		if(n % i == 0){
//			count++;
//		}
//	}
//	
//	if(count == 2){
//		std::cout << "YES";		
//	}
//	if(count > 2){
//		std::cout << "NO";
//	}
	
	if(check(n) == true){
		std::cout << "YES";
	}
	if(check(n) == false){
		std::cout << "NO";
	}
	return 0;
}
