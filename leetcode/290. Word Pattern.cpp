class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        stringstream ss(s);
        string word;

        while (ss >> word) {
            words.push_back(word);
        }
        if (words.size() != pattern.size()) {
            return false;
        }
        unordered_map<char, string> charToWord;
        unordered_map<string, char> wordToChar;
        for (int i = 0; i < pattern.size(); ++i) {
            char p = pattern[i];
            string w = words[i];

            if (charToWord.count(p)) {
                if (charToWord[p] != w) {
                    return false;
                }
            } else {
                charToWord[p] = w;
            }
            if (wordToChar.count(w)) {
                if (wordToChar[w] != p) {
                    return false;
                }
            } else {
                wordToChar[w] = p;
            }
        }
        return true;
    }
};
