#include <bits/stdc++.h>

//Bai 1
//Nhap mot so bat ky. Hay doc gia tri cua so nguyen do neu no co gia tri tu 1 den 9. Nguoc lai thong bao khong doc duoc
int main(){
	int n;
	std::cout << "Nhap so nguyen bat ky: ";
	std::cin >> n;
	
	switch(n){
		case 1:
			std::cout << "Mot";
			break;
		case 2:
			std::cout << "Hai";
			break;
		case 3:
			std::cout << "Ba";
			break;
		case 4:
			std::cout << "Bon";
			break;
		case 5:
			std::cout << "Nam";
			break;
		case 6:
			std::cout << "Sau";
			break;
		case 7:
			std::cout << "Bay";
			break;
		case 8:
			std::cout << "Tam";
			break;
		case 9:
			std::cout << "Chin";
			break;
		default:
			std::cout << "Khong doc duoc";
			break;	
	}
	return 0;
}
