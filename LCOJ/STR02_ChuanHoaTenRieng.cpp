#include <bits/stdc++.h>

using namespace std;

string chuanHoa(const string& name)
{
	istringstream iss(name);
	vector<string> words;
	string word;
	
	while(iss >> word)
	{
		word[0] = toupper(word[0]);
		for(size_t i = 1; i < word.length(); i++)
		{
			word[i] = tolower(word[i]);
		}
		words.push_back(word);
	}
	
	ostringstream oss;
	for(const auto& w : words)
	{
		oss << w << " ";
	}
	
	string result = oss.str();
	result.pop_back();
	return result;
}

int main()
{
	int t;
	cin >> t;
	cin.ignore();
	string name;
	while(t--)
	{
		getline(cin, name);
		cout << chuanHoa(name) << "\n";
	}
	return 0;
}
