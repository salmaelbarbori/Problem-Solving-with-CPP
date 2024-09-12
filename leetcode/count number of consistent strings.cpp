class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int cnt = 0;
        for(auto i = 0; i < words.size(); ++i)
        {   
            int sign = 0;
            for (auto j = 0; j < words[i].length(); ++j)
            {
                if (find(allowed.begin(), allowed.end(), words[i][j])==allowed.end() )
                sign = 1;
            }
            if (sign == 0)
            cnt++;
        }
        return cnt;
    }
};
