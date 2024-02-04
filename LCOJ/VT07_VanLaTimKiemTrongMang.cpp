#include <bits/stdc++.h>

// Tim kiem trong mang
// Viet chuong trinh nhap 11 so nguyen tu ban phim va luu 10 so dau tien vao mang
// Kiem tra xem so thu 11 co nam trong mang hay khong
// Neu co thi in ra cac vi tri theo thu tu tang dan
// Neu khong co thi in ra -1
// Input: 11 so nguyen duoc nhap tu ban phim
// Vi du: 1 2 3 4 5 6 7 8 9 1 1
// Output: 1 10
// So thu 11 o day la: 1
// So 1 xuat hien trong mang tren 2 lan
// O vi tri thu 1 va 10

using namespace std;

int main()
{
	int a[11];
	for(int i = 0; i < 11; i++)
	{
		cin >> a[i];
	}
	
	int chiso = -1;
	for(int i = 0; i < 10; i++)
	{
		if(a[10] == a[i])
		{
			chiso = i;
			cout << chiso + 1 << " ";
		}
	}
	if(chiso == -1)
	{
		cout << -1;
	}
	
	return 0;
}
