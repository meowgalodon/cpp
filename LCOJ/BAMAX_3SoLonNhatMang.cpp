#include <bits/stdc++.h>

#define MAX_SIZE 1000
// Tim 3 so lon nhat trong mang
// Y tuong: nhap cac phan tu r sap xep giam dan
// In ra 3 so lan luot o cac vi tri: a[0], a[1], a[2]
void input(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}
}

void sort(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(a[i] < a[j])
			{
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}

int solveMax1(int a[], int n)
{
	sort(a, n);
	return a[0];
}

int solveMax2(int a[], int n)
{
	sort(a, n);
	return a[1];
}

int solveMax3(int a[], int n)
{
	sort(a, n);
	return a[2];
}

int main()
{
	int arr[MAX_SIZE];
	int n;
	
	//Nhap so phan tu cua mang
	do{
		std::cin >> n;
	}while(n <= 1 || n > MAX_SIZE);
	
	//Nhap mang
	input(arr, n);
	
	//Ket qua
	std::cout << solveMax1(arr, n) << "\n";
	std::cout << solveMax2(arr, n) << "\n";
	std::cout << solveMax3(arr, n);
	return 0;
}
