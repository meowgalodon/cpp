#include <bits/stdc++.h>

int main(){
	char a;
	std::cout << "Nhap mot chu cai: ";
	std::cin >> a;
	
	if(a >= 'a' && a <= 'z'){
		std::cout << "Doi sang chu hoa: ";
		a -= 32;
		std::cout << a;
	}
	else if(a >= 'A' && a <= 'Z'){
		std::cout << "Doi sang chu thuong: ";
		a += 32;
		std::cout << a;
	}
	return 0;
}
