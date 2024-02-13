class Solution {
public:
    bool isPalindrome(string word) {
        int i, j;
        for (i = 0, j = word.size() - 1; i <= j; i++, j--)
        {
            if (word[i] != word[j])
                return false;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        int i;
        for (i = 0; i< words.size(); i++)
        {
            if (isPalindrome(words[i]))
                return (words[i]);
        }
        return ("");
    }
};
