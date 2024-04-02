#include <iostream>
#include <string.h>

using namespace std;

typedef string bignum;

// Nhap chuoi ky tu
void input(bignum &number)
{
	cin >> number;
}

// Ham can bang do dai
void equal_length(bignum &a, bignum &b)
{
	while(a.size() < b.size())
		a = '0' + a;
	while(b.size() < a.size())
		b = '0' + b;
}

// Ham cong 2 chuoi so nguyen lon
bignum add(bignum a, bignum b)
{
	equal_length(a, b);
	
	int carry = 0;
	bignum res;
	for(long i = a.size() - 1; i >= 0; --i)
	{
		int d = (a[i] - '0') + (b[i] - '0') + carry;
		
		carry = d / 10;
		res = (char)(d % 10 + '0') + res;
	}
	
	if(carry)
		res = '1' + res;
		
	return res;
}

int main()
{
	string a;
	string b;
	
	input(a);
	input(b);
	
	cout << add(a, b);
	return 0;
}
