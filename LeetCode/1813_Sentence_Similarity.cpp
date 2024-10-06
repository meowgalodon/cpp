class Solution {
public:
    bool areSentencesSimilar(string sentence1, string sentence2) {
 
        vector<string> words1, words2;
        istringstream stream1(sentence1), stream2(sentence2);
        string word;

        while (stream1 >> word) {
            words1.push_back(word);
        }
        while (stream2 >> word) {
            words2.push_back(word);
        }

        int n1 = words1.size();
        int n2 = words2.size();

        if (n1 == n2) {
            return sentence1 == sentence2; 
        }

        if (n1 > n2) {
            return isSimilar(words1, words2);
        } else {
            return isSimilar(words2, words1);
        }
    }
private:
    bool isSimilar(const vector<string>& longer, const vector<string>& shorter) {
        int n1 = longer.size();
        int n2 = shorter.size();

        int i = 0;
        while (i < n2 && longer[i] == shorter[i]) {
            i++;
        }

        int j = 0;
        while (j < n2 && longer[n1 - 1 - j] == shorter[n2 - 1 - j]) {
            j++;
        }

        return (i + j >= n2);
    }
};
