class Solution {
public:
    string truncateSentence(string s, int k) {
        string s1, ans;
        stringstream ss(s);
        while (ss >> s1 && k>0)
        {
           if (!ans.empty()) {
              ans += " ";
            }
            ans += s1;
            --k;
        }
        return ans;
        
    }
};
