#include <bits/stdc++.h>

// Sap xep mang giam dan
void input(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}
}

void sortDecrease(int a[], int n)
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

void output(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		std::cout << a[i] << " ";
	}
}

int main()
{
	int n;
	std::cin >> n;
	int arr[1000];
	
	input(arr, n);
	sortDecrease(arr, n);
	output(arr, n);
	return 0;
}
