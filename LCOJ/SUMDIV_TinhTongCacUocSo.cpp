#include <bits/stdc++.h>

// Tinh tong cac uoc so

using namespace std;

long long a;
long long t;
long long s;
long long i;
long long j;

int main()
{
	cin >> t;
	while(t--)
	{
		s = 0;
		cin >> a;
		for(j = 1; j <= sqrt(a); j++)
		{
			if(a % j == 0)
			{
				s += j;
				if(j != a / j)
				{
					s += a / j;
				}
			}
		}
		cout << s << endl;
	}
	return 0;
}
