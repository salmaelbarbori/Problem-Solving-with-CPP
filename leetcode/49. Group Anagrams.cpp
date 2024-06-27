class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> h;
        vector<vector<string>> ans;
        int i = 0;
        for(auto s:strs)
        {
            string s1 = s;
            sort(s1.begin(), s1.end());
            h[s1].push_back(s);
        }
        for(auto& [k,v] : h)
            ans.push_back(v);
        return ans;
    }
};
