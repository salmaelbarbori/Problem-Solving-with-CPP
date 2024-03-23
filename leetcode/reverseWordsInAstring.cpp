class Solution {
public:
    string reverseWords(string s) {
        vector<string> temp;
        string ss = "";
        for (auto c:s)
        {
            if(c == ' ')
            {
                if (!ss.empty())
                {
                    temp.push_back(ss);
                    ss ="";
                }
            }
            else {
                    ss.push_back(c);
                }
        }
        if (!ss.empty())
            temp.push_back(ss);
        
        reverse(temp.begin(), temp.end());
        string result;
        for (const string& c:temp)
        {
            result += c+" ";
           
        }
        if (!result.empty())
            result.pop_back();
        return result;
    }
};
