#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	int check = 0;
	
	for(int i = 0;; i++)
	{
		cin >> n;
		if(n == 0)
		{
			if(check == 0) 
			{
				cout << "NOT FOUND";	
			}
			break;
		}
		if(n < 0)
		{
			check = 1;
			cout << n << " ";
		}
	}
	return 0;
}
