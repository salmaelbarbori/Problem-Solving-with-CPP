class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans = 0, current;
        for (auto c: columnTitle)
        {
            current = c-'A'+ 1;
            ans=ans*26 + current;
        }
        return ans;
        }
};
