#include <bits/stdc++.h>

//Tim uoc chung lon nhat va boi chung nho nhat
int UCLN(long a, long b){
	if(a == 0 || b == 0){
		return a + b;
	}
	else{ // Tim uoc chung lon nhat bang phuong phap tru
		while(a != b){
			if(a > b){
				a -= b;
			}
			else{
				b -= a;
			}
		}
		// Luc nay a = b nen tra ve a hoac b deu duoc
		return a;
	}
}
int main(){
	//Khai bao
	long a;
	long b;
	
	//Nhap gia tri
	std::cout << "Nhap so nguyen a: ";
	std::cin >> a;
	std::cout << "Nhap so nguyen b: ";
	std::cin >> b;
	
	//Ket qua
	long BCNN = (a * b) / UCLN(a, b);
	std::cout << "Uoc chung lon nhat cua " << a  << " va " << b << " la: "<< UCLN(a, b);
	std::cout << "\n";
	std::cout << "Boi chung nho nhat cua " << a  << " va " << b << " la: "<< BCNN;
	return 0;
}
