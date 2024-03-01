class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int cnt = 0, n = s.length();
        for (auto i = 0; i < n; i++)
        {
            if (s[i] == '1')
                cnt++;
        }
        for (auto j = 0; j < n; j++)
        {
           if (j < cnt - 1) 
                s[j] = '1';
            else 
                s[j] = '0';
        }
        s[n - 1] = '1';
    return s;
    }
    
};
