class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    // Dung ham empty cua vector de kiem tra strs rong hay khong?
    // Neu co thi tra ve ""
        if(strs.empty())
        {
            return "";
        } 

        // Duyet cac phan tu trong vector
        for(int i = 0; i < strs[0].length();++i)
        {
            // Duyet cac chuoi trong vector
            for(int j = 1; j < strs.size(); ++j)
            {
                if(i == strs[j].length() || strs[j][i] != strs[0][i])
                {
                    return strs[0].substr(0, i);
                }
            }
        }
        return strs[0];
    }
};
