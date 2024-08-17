class Solution {
public:
    vector<string> validStrings(int n) {
        vector<string> result;
        for (int i = 0; i < (1 << n); ++i) {
            string s = "";
            for (int j = n - 1; j >= 0; --j) {
                s += ((i & (1 << j)) ? '1' : '0');
            }
            bool hasTwoZeros = false;
            for (auto i = 0; i < s.length() - 1; i++)
            {
                if (s[i] == '0' && s[i+1] == '0')
                    hasTwoZeros = true;
            }
            if (!hasTwoZeros)
                result.push_back(s);
        }
    return result;
    }
};
