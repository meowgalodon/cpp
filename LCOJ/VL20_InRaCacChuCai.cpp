#include <bits/stdc++.h>

// In ra cac chu cai in hoa trong doan [a, b]
// Vi du:
// Input: a d
// Output: A B C D

using namespace std;

int main()
{
	char a;
	cin >> a;
	char b;
	cin >> b;
	
	char a1 = a - 32;
	char b1 = b - 32;
	
	for(char i = a1; i <= b1; i++)
	{
		cout << i << " ";
	}
	return 0;
}
