#include <bits/stdc++.h>

// Dem so phan tu = so nguyen x nhap tu ban phim trong mang
// Vi du:
// Input: 5 (so phan tu) 4 (so nguyen x)
// 1 2 3 4 5
// Output: --> 1

using namespace std;

int main()
{
	long n;
	cin >> n;
	long x;
	cin >> x;
	int a[1000];
	
	long count = 0;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	
	for(int i = 0; i < n; i++)
	{
		if(a[i] == x)
		{
			count++;
		}
	}
	
	cout << count;
	return 0;
}
