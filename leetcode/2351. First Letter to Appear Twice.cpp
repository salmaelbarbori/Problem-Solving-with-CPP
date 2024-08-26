class Solution {
public:
    char repeatedCharacter(string s) {
        set<char> v;
        for (auto i = 0; i < s.length(); ++i)
        {
            if (v.find(s[i]) != v.end())
                return s[i];
            v.insert(s[i]);
        }   
        return s[0];
    }
};
