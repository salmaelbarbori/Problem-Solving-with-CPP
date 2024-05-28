class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int m = 0, sum = 0, i = 0, j;
          for (j = 0; j < s.length(); j++) {
            sum = sum + abs(s[j] - t[j]);
            while (sum > maxCost && i < t.length()) {
                sum = sum - abs(s[i] - t[i]);
                i++;
            }
            m = max(m, j - i + 1);
        }
        return m;
    }
};

