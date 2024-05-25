#include <bits/stdc++.h>

using namespace std;

void input(vector<vector<int>>& maTran)
{
	int m;
	cin >> m;
	
	int n;
	cin >> n;
	
	maTran.resize(m, vector<int>(n));
	
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cin >> maTran[i][j];
		}
	}
}

// Ham check hang chi co duy nhat mot so le
bool check(const vector<int>& m)
{
	int count = 0;
	for(int num : m)
	{
		if(num % 2 != 0)
		{
			++count;
		}
	}
	return count == 1;
}

// Ham tinh tong cac so hang tren hang chi co duy nhat mot so le
int solve(const vector<vector<int>>& maTran)
{
	int sum = 0;
	for(const auto& hang : maTran)
	{
		if(check(hang))
		{
			for(int num : hang)
			{
				sum += num;
			}
		}
	}
	return sum;
}

int main()
{
	vector<vector<int>> maTran;
	input(maTran);
	
	for(const auto& hang : maTran)
	{
		int tong = solve(maTran);
		if(tong > 0)
		{
			cout << tong;
			break;
		}
	}
	return 0;
}
