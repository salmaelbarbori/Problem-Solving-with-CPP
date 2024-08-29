class Solution {
public:
    int minimizedStringLength(string s) {
        int cnt = 0;
        map<char, int> m;
        for (auto s1:s)
            m[s1]++;
        auto it = m.begin();
        while (it != m.end())
        {
            cnt++;
            it++;
        }
        
        return cnt;
    }
};
