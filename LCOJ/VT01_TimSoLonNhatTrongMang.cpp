#include <bits/stdc++.h>


void input(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}
}

int findMax(int a[], int n)
{
	int max = a[0];
	for(int i = 0; i < n; i++)
	{
		if(a[i] > max)
		{
			max = a[i];	
		}	
	}
	return max;	
}


int main()
{
	int n;
	std::cin >> n;
	
	int *arr = new int(n);
	
	input(arr, n);
	
	std::cout << findMax(arr, n);
	return 0;
}
