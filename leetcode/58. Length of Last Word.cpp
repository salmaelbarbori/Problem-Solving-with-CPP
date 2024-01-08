class Solution {
public:
    int lengthOfLastWord(string s) {
        int length_ = 0, i = 0;
        string rev = string(s.rbegin(), s.rend());

        while (rev[i] == ' ' && i < s.length())
            i++;
        while (rev[i] != ' ' && i < s.length())
        {
            length_++;
            i++;
        }
        return length_;
    }
};
