class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(t.length() != s.length())
            return false;
        vector<int> m1(300,0);
        vector<int> m2(300,0);
        int i;
        for (i = 0; i < s.length(); i++)
        {
            if (m1[s[i]] != m2[t[i]])
                return false;
            m1[s[i]] = i + 1;
            m2[t[i]] = i + 1;
        }
        
        
        return true;
    }
};
