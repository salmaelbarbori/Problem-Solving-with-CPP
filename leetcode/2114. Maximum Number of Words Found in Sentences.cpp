class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans = 0;
        for (const auto& sentence : sentences) {
            int wordCount = count(sentence.begin(), sentence.end(), ' ') + 1;
            ans = max(ans, wordCount);
        }
        return ans;
    }
};
