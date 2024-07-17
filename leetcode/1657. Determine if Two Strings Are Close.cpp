class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if (word1.length() != word2.length())
            return false;

        unordered_map<char, int> count1, count2;
        for (char c : word1) count1[c]++;
        for (char c : word2) count2[c]++;
        for (char c : word1)
            if (count2.find(c) == count2.end())
                return false;
        for (char c : word2) 
            if (count1.find(c) == count1.end())
                return false;
        vector<int> freq1, freq2;
        for (auto& p : count1) freq1.push_back(p.second);
        for (auto& p : count2) freq2.push_back(p.second);
        sort(freq1.begin(), freq1.end());
        sort(freq2.begin(), freq2.end());
        return freq1 == freq2;
        
    }
};
