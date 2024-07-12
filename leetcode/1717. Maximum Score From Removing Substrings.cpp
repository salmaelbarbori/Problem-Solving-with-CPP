class Solution {
public:
    int maximumGain(string s, int x, int y) {
         int cnt = 0;
        string stack1;
        for (char c : s) {
            if (!stack1.empty() && 
                ((x > y && stack1.back() == 'a' && c == 'b') || 
                 (x <= y && stack1.back() == 'b' && c == 'a'))) {
                stack1.pop_back();
                cnt += (x > y) ? x : y;
            } else {
                stack1.push_back(c);
            }
        }
        string stack2;
        for (char c : stack1) {
            if (!stack2.empty() && 
                ((x > y && stack2.back() == 'b' && c == 'a') || 
                 (x <= y && stack2.back() == 'a' && c == 'b'))) {
                stack2.pop_back();
                cnt += (x > y) ? y : x;
            } else {
                stack2.push_back(c);
            }
        }
        return cnt;
    }
};
