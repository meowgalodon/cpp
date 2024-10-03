class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int soDu = 1;

        int i = n - 1;
        while(i >= 0 && soDu > 0)
        {
            int carry = digits[i] + soDu;
            digits[i] = carry % 10;
            soDu = carry / 10;
            i--;
        }

        if(soDu > 0)
        {
            digits.insert(digits.begin(), soDu);
        }

        return digits;
    }
};
