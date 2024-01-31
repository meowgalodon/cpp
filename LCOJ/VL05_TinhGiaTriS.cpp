#include <bits/stdc++.h>
#define int long long

// Tinh tong:
// S = 1 - 2 + 3 - ... + (3n + 1) --> Neu n chan
// S = 1 - 2 + 3 - ... - (3n + 1) --> Neu n le

using namespace std;

main()
{
	int n;
	cin >> n;
	int sum = 0;
	
	for(int i = 1; i <= (3 * n + 1); ++i)
	{
		if(i % 2 == 0)
		{
			sum -= i;
		}
		else
		{
			sum += i;	
		}		
	}
	
	cout << sum;
	return 0;
}
