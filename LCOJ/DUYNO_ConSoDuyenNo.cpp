#include <bits/stdc++.h>

// Con so duyen no
// Vi du:	12345 --> NO
//			12331 --> YES
// Giai thich: So dau va so cuoi giong nhau

using namespace std;

int main()
{
	string s;
	while(cin >> s)
	{
		if(s[0] == s[s.size() - 1])
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}
