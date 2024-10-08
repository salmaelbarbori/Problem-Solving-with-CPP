class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        vector<char> ans(s.length());
        for (int i = 0; i < s.length(); ++i) {
            ans[indices[i]] = s[i];
        }
        return (string(ans.begin(), ans.end()));
    }
};
