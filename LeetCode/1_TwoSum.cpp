class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        unordered_map<int, int> numMap;
        int n = nums.size();

        for(int i = 0; i < n; i++)
        {
            numMap[nums[i]] = i;
        }

        for(int i = 0; i < n; i++)
        {
            int answer = target - nums[i];
            if(numMap.count(answer) && numMap[answer] != i)
            {
                return {i, numMap[answer]};
            }
        }
        return {};
    }
};
