class Solution {
public:
    int maxDepth(string s) {
        int mx = 0;
        int left_count = 0, right_count = 0;
        
        for(auto i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                left_count++;
            } else if (s[i] == ')') {
                right_count++;
            }
            
            mx = max(mx, left_count - right_count);
        }
        
        return mx;
    }
};
