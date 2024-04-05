class Solution {
public:
    string makeGood(string s) {
        if(s.length() == 0)
            return "";
        int j = 0;
        while (j < 100)
        {
        for(auto i =0; i< s.length(); i++)
        {
            if (s[i] == s[i+1] + 32 || s[i] == s[i+1] - 32)
            {
                s.erase(s.begin()+i+1);
                s.erase(s.begin()+i);
            }
        }
            j++;
        }
        return s;
    }
};
