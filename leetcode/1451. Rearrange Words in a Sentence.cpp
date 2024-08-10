class Solution {
public:
    string arrangeWords(string text) {
        vector<string> words;
        string word;
        stringstream ss (text);
        text[0] = tolower(text[0]);
        while (ss >> word)
            words.push_back(word);
        stable_sort(words.begin(), words.end(), [](const string& w1, const string& w2) {
            return w1.length() < w2.length();
        });
        words[0][0] = toupper(words[0][0]);
        words[words.size()-1][0] = tolower(words[words.size()-1][0]);
        string ans = words[0];
        for (auto i = 1; i < words.size(); ++i)
            ans += " " + words[i];
        return ans;
    }
};
