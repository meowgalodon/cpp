class Solution {
public:
    bool isMatching(char a, char b)
    {
        return ((a == '(' && b == ')') || (a == '{' && b == '}') || (a == '[' && b == ']'));
    }
    bool isValid(string s) {
        stack <char> s2; // create a stack contain (){}[]

        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == '{' || s[i] == '(' || s[i] == '[')
            {
                s2.push(s[i]);
            }
            else
            {
                if(s2.empty())
                {
                    return false;
                }
                if(isMatching(s2.top(), s[i]))
                {
                    s2.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        if(s2.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
