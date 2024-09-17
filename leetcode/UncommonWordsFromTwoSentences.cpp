class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        string s = s1 + " " + s2;
        map<string, int> map_counter;
        stringstream ss(s);
        string word;
        while (ss >> word)
            map_counter[word]++;
        vector<string> ans;
        for (auto it = map_counter.begin(); it != map_counter.end(); ++it)
        {
            if (it->second == 1)
                ans.push_back(it->first);
        }
        return ans;
    }
};
