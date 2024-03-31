#include <bits/stdc++.h>

// Dem so khoang trang trong chuoi
// Y tuong dung vong lap de dem so khoang trang trong chuoi

using namespace std;

int main()
{
	long long n;

	long long i, j;
	
	cin >> n;
	cin.ignore();
	
	while(n--)
	{
		string s;
		getline(cin, s);
		long long soKhoangTrang = 0;
		for(i = 0; i < s.length(); i++)
		{
			if(s[i] == ' ' && s[i+1] != ' ')
			{
				soKhoangTrang++;
			}
		}
		cout << soKhoangTrang << endl;
	}
	
	return 0;
}
