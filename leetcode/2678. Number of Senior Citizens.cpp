class Solution {
public:
    int countSeniors(vector<string>& details) {
        int cnt = 0;
        for (auto d: details)
        {
            if (d.substr(11,2) > "60")
                cnt++;
        }
        return cnt;
    }
};
