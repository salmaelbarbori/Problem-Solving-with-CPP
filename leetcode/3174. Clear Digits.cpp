class Solution {
public:
    string clearDigits(string s) {
        for (auto i = 0; i < s.length(); ++i)
        {
            if (s[i] >= '0' && s[i] <= '9')
            {
                if (i > 0) {
                    s.erase(s.begin() + i - 1);
                    --i;
                }
                s.erase(s.begin()+i);
                i--;
            }
        }
        return s;
    }
};
