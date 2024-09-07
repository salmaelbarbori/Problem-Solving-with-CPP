class Solution {
public:
    string countAndSay(int n) {
        string s;
        for (auto i = 1; i <= n; i++)
        {
            s+= to_string(i);
        }
        map<char, int> m;
        for (auto s1:s)
            m[s1]++;
        string ans;
        for (auto it = m.begin(); it!= m.end(); ++it)
        {
            ans = ans + it->first + to_string(it->second);
        }
        return ans;
    }
};
