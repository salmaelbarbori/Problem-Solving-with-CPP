class Solution {
public:
    string reverseVowels(string s) {
        vector<char> v;
        int j = 0;
        for (auto s1:s)
            if (s1 == 'a' || s1 == 'e' || s1 == 'i' || s1 == 'o' || s1 == 'u'
                || s1 == 'A' || s1 == 'E' || s1 == 'I' || s1 == 'O' || s1 == 'U')
                v.push_back(s1);
        reverse(v.begin(), v.end());
        for (auto i = 0; i < s.length(); ++i)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'
               || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            {
                s[i] = v[j];
                j++;
            }
        }
        return s;
    }
};
