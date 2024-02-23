#include <bits/stdc++.h>

// Sap xep mang
// Vi du:
// Input: 5 3 2 4 1
// Output: 5 2 3 4 1
// --> Giu nguyen 2 vi tri dau va cuoi, sap xep cac phan tu con lai tang dan

using namespace std;

int main()
{
	int a[100000];
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for(int i = 1; i <= n; i++)
	{
		sort(a + 1, a + (n - 1));
	}
	for(int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	
	return 0;
}
