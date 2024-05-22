#include <string>
#include <iostream>
#include <ctype.h>

// Ham chuan hoa chuyen chu hoa thanh chu thuong

using namespace std;

void lower(string &a)
{
	for(int i = 0; i < a.size(); i++)
	{
		a[i] = tolower(a[i]);
	}
}

int main()
{
	string a;
	getline(cin, a);
	lower(a);
	cout << a;
	return 0;
}
