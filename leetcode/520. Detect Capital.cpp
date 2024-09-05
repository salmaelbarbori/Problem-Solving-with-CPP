class Solution {
public:
    bool detectCapitalUse(string word) {
        int upperCaseCount = 0;
        
        for (char c : word) {
            if (isupper(c)) {
                upperCaseCount++;
            }
        }
        
        if (upperCaseCount == word.size() || upperCaseCount == 0) {
            return true;
        }
        
        if (upperCaseCount == 1 && isupper(word[0])) {
            return true;
        }
        
        return false;
    }
};
