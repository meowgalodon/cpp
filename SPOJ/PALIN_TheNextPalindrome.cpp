#include <iostream>
#include <string>

using namespace std;

string next_palindrome(string num_str)
{
	int length = num_str.size();

	if(num_str == string(length, '9'))
	{
		string result = "1" + string(length - 1, '0') + "1";
		return result;
	}

	string left_half = num_str.substr(0, (length + 1) / 2);
	string palindrome = left_half + string(left_half.rbegin() + (length % 2), left_half.rend());

	if(palindrome > num_str)
	{
		return palindrome;
	}

	int i = (length - 1) / 2;
	while(i >= 0 && left_half[i] == '9')
	{
		left_half[i] == '0';
		i--;
	}
	if(i >= 0)
	{
		left_half[i]++;
	}
	else {
		left_half = "1" + left_half;
	}

	palindrome = left_half + string(left_half.rbegin() + (length % 2), left_half.rend());
	return palindrome;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string k;
		cin >> k;
		cout << next_palindrome(k) << endl;
	}
	return 0;
}
