#include <bits/stdc++.h>

// Tinh trung binh cong cac so le cua mang
// Input: so nguyen duong n, n phan tu
// Vi du:
// 5
// 1 2 3 4 6
// --> 2.0000 lam tron den chu so thap phan thu 4

float solve(int a[], int n)
{
	float sumOdd = 0;
	int count = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] % 2 != 0)
		{
			sumOdd += a[i];
			count++;
		}
	}
	return sumOdd / count;
}

int main()
{
	int n;
	std::cin >> n;
	int arr[1000];
	if(n >= 2 && n <= 1000)
	{
		for(int i = 0; i < n; i++)
		{
			std::cin >> arr[i];
		}
	}
	
	std::cout << std::fixed << std::setprecision(4) << solve(arr, n);
	return 0;
}
