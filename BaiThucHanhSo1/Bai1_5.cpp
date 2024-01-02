#include <bits/stdc++.h>

using namespace std;

//Tim so lon nhat trong mang mot chieu
int main(){
	//Khai bao so phan tu va mang mot chieu
	int n;
	cin >> n;
	int a[n];
	
	//Dung vong lap de nhap cac phan tu
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	//Khai bao bien max = a[0]
	int max = a[0];
	
	//So sanh max voi cac ptu con lai trong mang
	for(int i = 0; i < n; i++){
		if(a[i] < max){
			continue;
		}
		if(a[i] > max){
			max = a[i];
		}
	}
	
	//Xuat gia tri lon nhat ra man hinh
	cout << max;
	return 0;
}
