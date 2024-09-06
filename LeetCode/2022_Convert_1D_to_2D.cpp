class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) 
    {
        if(m * n != original.size())
        {
            return {};
        }

        vector<vector<int>> result(m, vector<int>(n));

        for(int i = 0; i < m; ++i)
        {
            for(int j = 0; j < n; ++j)
            {
                int index = i * n + j;
                result[i][j] = original[index];
            }
        }
        return result;
    }
};
