class Solution {
public:
    string reversePrefix(string word, char ch) {
        for (auto i = 0; i <= word.length(); i++)
        {
            if (find(word.begin(), word.begin()+i, ch)!= word.begin()+i)
            {
                reverse(word.begin(), word.begin()+i);
                return word;
            }
        }
        return word;
    }
};
