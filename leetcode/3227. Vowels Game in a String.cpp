class Solution {
public:
    bool doesAliceWin(string s) {
        vector<char> v = {'a', 'o', 'i', 'e', 'u'};
        int cnt = 0;
        for (char c:s)
        {
            if(find(v.begin(), v.end(), c) != v.end())
            {
                cnt++;
            }
        }   
        return cnt%2!=0;
    }
};
