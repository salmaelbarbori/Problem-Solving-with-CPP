class Solution {
public:
    int compress(vector<char>& chars) {
        map<char, int> m;
        for(auto c:chars)
            m[c]++;
        vector<char> v;
        for(auto it = m.begin(); it != m.end(); ++it)
        {
            v.push_back(it->first);
             if (it->second > 1) {
                string count = to_string(it->second);
                for (char c : count) {
                    v.push_back(c);
                }
            }
        }
        chars.assign(v.begin(), v.end());    
        return v.size();
    }
};
