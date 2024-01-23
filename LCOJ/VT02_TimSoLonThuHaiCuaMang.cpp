#include <bits/stdc++.h>

#define MAX_SIZE 1000

// Tim so lon thu 2 trong mang
// Truong hop 3 so == nhau ?? a == b == c --> NOT FOUND
// Y tuong: Sap xep mang theo thu tu giam dan
// Ket qua: La phan tu a[1] khi mang da duoc sap xep giam dan, vi a[0] la phan tu lon nhat
// Vi du: 1 2 3 --> 3
//		  3 3 3 --> NOT FOUND

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
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

int max(int a[], int n)
{
	sort(a, n);
	return a[0];
}

int soLonThuHai(int a[], int n)
{
	int solonthuhai = INT_MIN;
	int solonnhat = max(a, n);
	for(int i = 0; i < n; i++)
	{
		if(a[i] < solonnhat && solonthuhai < a[i])
		{
			solonthuhai = a[i];
		}	
	}	
	return solonthuhai;
}

int main()
{
	int n;
	int arr[MAX_SIZE];
	
	do{
		std::cin >> n;
	}while(n <= 1 || n > MAX_SIZE);
	
	input(arr, n);
	
	int answer = soLonThuHai(arr, n);
	
	if(answer != INT_MIN)
	{
		std::cout << answer;
	}
	else
	{
		std::cout << "NOT FOUND";
	}
	
	return 0;
}
