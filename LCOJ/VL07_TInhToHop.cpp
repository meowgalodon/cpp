#include <bits/stdc++.h>

//Tinh to hop chap k cua n

using namespace std;



int main()
{
	long double n;
	long double k;
	long double N = 1;
	long double K = 1;
	long double S = 1;
	cin >> n;
	cin >> k;
	
	if(n >= k)
	{
		if(n >= 1 && k >= 1)
		{
			if(k <= 25 && n <= 25)
			{
				for(int f = 1; k >= f; f++)
				{
					K *= f;
				}
			}
			for(int j = 1; n >= j; j++)
			{
				N *= j;
			}
		}
		for(int i = 1; (n - k) >= i; i++)
		{
			S *= i;
		}
		cout << N / (K * S) << endl;
	}
	else
	{
		cout << "MATH ERROR" << endl;
	}

	return 0;
}

