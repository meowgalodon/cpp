#include <iostream>

// Tim do chenh lech lon nhat trong mang
// Y tuong: Sap xep mang theo tang dan, lay cuoi tru dau

using namespace std;

// Khai bao bien toan cuc
unsigned int n;
long a[100000];

// Ham input
void input()
{
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}

void sort()
{
	long temp = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(a[i] < a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

void solve()
{
	long answer = 0;
	answer = a[0] - a[n - 1];
	cout <<  answer;
}

int main()
{	
	cin >> n;
	input();
	sort();
	solve();
	return 0;
}
