class Solution {
public:
    string helper(int n)
    {
        string s = to_string(n);
        sort(s.begin(), s.end());
        return s;
    }
public:
    bool reorderedPowerOf2(int n) {
       string temp = helper(n);
        for (auto i = 0; i <= 29; ++i)
        {
            string ans = helper(1 << i);
            if (temp == ans)
                return true;
        }
        return false;
        
    }
};
