#include <bits/stdc++.h>


void input(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}
}

int findIndexMax(int a[], int n)
{
	int index = 0;
	int max = a[0];
	for(int i = 0; i < n; ++i)
	{
		if(a[i] >= max)
		{
			max = a[i];
			index = i;	
		}	
	}	
	return index;
}


int main()
{
	int n;
	std::cin >> n;
	
	int *arr = new int(n);
	
	input(arr, n);
	
	std::cout << findIndexMax(arr, n);
	return 0;
}
