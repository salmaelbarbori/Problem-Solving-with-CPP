class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>result;
        for (auto i = 0; i  <words.size(); i++)
        {
            if (find(words[i].begin(),words[i].end(),x) != words[i].end())
                result.push_back(i);
        }
        return result;
    }
};
