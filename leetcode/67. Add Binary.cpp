class Solution {
public:
    string addBinary(string a, string b) {
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        int i = 0,temp = 0;
        string ans;
        while (i < a.length() || i < b.length())
        {
            int sum = temp;
            if (i < a.length()) {
                sum += a[i] - '0';
            }
            if (i < b.length()) {
                sum += b[i] - '0';
            }
            ans += (sum % 2) + '0';
            temp = sum / 2;
            
            i++;
        }
        if (temp == 1) {
            ans += '1';
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
