class Solution {
public:
    string reformatNumber(string number) {
        string n;
        for (auto n1:number)
        {
            if (n1!=' ' && n1!= '-')
                n += n1;
        }
        string ans;
        int i = 0;
        while (i < n.size()) {
            int remaining = n.size() - i;
            
            if (remaining > 4) {
                ans += n.substr(i, 3) + '-';
                i += 3;
            } else if (remaining == 4) {
                ans += n.substr(i, 2) + '-' + n.substr(i + 2, 2);
                break;
            } else {
                ans += n.substr(i, remaining);
                break;
            }
        }
        return ans;
    }
};
