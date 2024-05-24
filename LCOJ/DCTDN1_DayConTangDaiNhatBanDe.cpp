#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	int a;
	cin >> n;
	vector<int> v;
	for(int i = 1; i <= n; i++)
	{
		cin >> a;
		auto it = lower_bound(v.begin(), v.end(), a);
		if(it == v.end())
		{
			v.push_back(a);
		}
		else
		{
			*it = a;
		}
	}
	cout << v.size();
	return 0;
}
