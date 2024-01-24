#include <bits/stdc++.h>

int timX(int a[], int n, int x)
{
	for(int i = 0; i < n; i++)
	{
		if(a[i] == x)
		{
			return i;
		}
	}
	return -1;
}

void input(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		do {
			a[i] = rand() % n + 1;	
		} while(timX(a, i, a[i]) >= 0);
	}
}

void sortIncrease(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(a[i] > a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

//void sortDecrease(int a[], int n)
//{
//	for(int i = 0; i < n; i++)
//	{
//		for(int j = i + 1; j < n; j++)
//		{
//			if(a[i] < a[j])
//			{
//				int temp = a[i];
//				a[i] = a[j];
//				a[j] = temp;
//			}
//		}
//	}	
//}

void output(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		std::cout << " " << a[i];	
	}	
}

void outputArrayIncrease(int a[], int n)
{
	std::cout << "Mang tang dan la: ";
	for(int i = 0; i < n; i++)
	{
		sortIncrease(a, n);	
		std::cout << " " << a[i];
	}
}

//void outputArrayDecrease(int a[], int n)
//{
//	std::cout << "Mang giam dan la: ";
//	for(int i = 0; i < n; i++)
//	{
//		sortDecrease(a, n);
//		std::cout << " " << a[i];
//	}
//}

int timKiem(int a[], int size, int x)
{
	int left = 0;
	int right = size - 1;
	
	while(left < right)
	{
		//  0  1  2  3  4   5
		// {1, 3, 4, 6, 9, 10}
		// Muon tim so 4
		
		// {1, 2, 3, 4, 5, 6}
		int d = (a[right] - a[left]) / (right - left); // tinh khoang cach trung binh
		// 		(10 - 1) / (5 - 0) = 9 / 5 --> 1
		int dudoanVT = ((x - a[left]) / d) + left;
		//				((4 - 1) / 1) + 0 --> index cua 4 = 3
		if(x == a[dudoanVT]) return dudoanVT;
		// 4 == a[3] ?? 4 == 6 ??
		if(x < a[dudoanVT])
		{
			right = dudoanVT - 1;
		}
		else
		{
			left = dudoanVT + 1;
		}
	}
}

int main()
{
	int n;
	std::cout << "Nhap so luong phan tu cua mang: ";
	std::cin >> n;
	int arr[1000];
	
	input(arr, n);
	sortIncrease(arr, n);
	
	std::cout << "Mang vua nhap la: ";
	output(arr, n);
	std::cout << "\n";

	int x;	
	std::cout << "Nhap so ban muon tim vi tri trong mang tren: ";
	std::cin >> x;
	
	timKiem(arr, n, x);
//	outputArrayIncrease(arr, n);
//	std::cout << "\n";
//	outputArrayDecrease(arr, n);

	return 0;
}
