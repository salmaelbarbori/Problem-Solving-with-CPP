class Solution {
public:
    int maxVowels(string s, int k) {
        int i = 0, n = s.length(), cnt = 0, m;
        for (int i = 0; i < k; ++i) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                cnt++;
        }
        m = cnt;
        for (int i = k; i < n; ++i) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') 
                cnt++;
            if (s[i - k] == 'a' || s[i - k] == 'e' || s[i - k] == 'i' || s[i - k] == 'o' ||                 s[i - k] == 'u') 
                cnt--;
            m = max(m, cnt);
        }
        return m;
    }
};
