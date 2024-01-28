#include <bits/stdc++.h>

// Tim kiem trong mang
using namespace std;
int n;
int numberFind;
int number;
bool found;
void solve()
{
	cin >> n;
	cin >> numberFind;
	found = false;
	for(int i = 1; i <= n; ++i)
	{
		cin >> number;
		if(number == numberFind)
		{
			found = true;
		}
	}
	if(found) cout << "YES";
	else cout << "NO";
}

int main()
{
	solve();
	return 0;
}
