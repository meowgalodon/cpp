#include <bits/stdc++.h>

// So doi xung
// 12321 --> a1[] = [1, 2, 3, 2, 1] --> size = 5
// 12344321 --> a2[] = [1, 2, 3, 4, 4, 3, 2, 1] --> size = 8
// size % 2 == 1 --> le
// doi xung <=> a[0] = a[size - 1]
//				a[1] = a[size - 2]
//				a[2] = a[size - 3]
// ...................................
//				a[i] = a[size - 1 - i]
// vong lap: i = 0; i < size / 2; i++ (size le)
// vong lap: i = 0; i < size / 2; i++ (size chan)
// so sanh: neu a[i] != a[size - 1 - i] --> return 0;

int kiemTraSoDoiXung(unsigned int n)
{
	// chuyen sang mang
	int a[100];
	int size = 0;
	while(n > 0)
	{
		a[size] = n % 10;
		n /= 10;
		size++;
	}
	for(int i = 0; i < size / 2; i++)
	{
		if(a[i] != a[size - 1 - i]) return 0;
		else
		{
			return 1;	
		}
	}
}

int main()
{
	unsigned int n;
	std::cout << "Moi ban nhap so nguyen duong: ";
	std::cin >> n;
	
	if(kiemTraSoDoiXung == 0)
	{
		std::cout << n << " khong phai la so doi xung!";
	}
	else
	{
		std::cout << n << " la so doi xung!";
	}
	
	return 0;
}
