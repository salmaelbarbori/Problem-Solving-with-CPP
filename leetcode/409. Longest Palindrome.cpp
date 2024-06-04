class Solution {
public:
    int longestPalindrome(string s) {
        map<int, char> m;
        for (auto s1:s)
            m[s1]++;
        int n = s.size(), cnt = 0;
        for (auto i = m.begin(); i != m.end(); ++i)
        {
            if (i->second % 2 == 1)
                cnt += 1;
        }
        if (cnt > 1)
            return (n-cnt+1);
        return n;
    }
};
