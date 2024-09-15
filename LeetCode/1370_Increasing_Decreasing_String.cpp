class Solution {
public:
    string sortString(string s) {
        std::map<char, int> freq;
    
        for (char c : s) {
            freq[c]++;
        }

        std::string result;
    
        while (!freq.empty()) {
            for (auto it = freq.begin(); it != freq.end(); ) {
                result += it->first;
                if (--(it->second) == 0) {
                    it = freq.erase(it);
                }   
                else 
                {
                ++it;
                }
            }
        
            for (auto it = freq.rbegin(); it != freq.rend(); ) {
                result += it->first;
                if (--(it->second) == 0) {
                    it = std::map<char, int>::reverse_iterator(freq.erase(std::next(it).base()));
                } else {
                    ++it;
                }
            }
        }

        return result;
    }
};
