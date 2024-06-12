class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char, char> charMap;
        unordered_set<char> s;
        char a = 'a';
        
        for (char ch : key) {
            if (ch != ' ' && s.find(ch) == s.end()) {
                charMap[ch] = a;
                s.insert(ch);
                ++a;
                if (a > 'z') break;
            }
        }
        
        string decodedMessage;
        for (char ch : message) {
            if (ch == ' ') {
                decodedMessage += ' ';
            } else {
                decodedMessage += charMap[ch];
            }
        }

        return decodedMessage;
    }
};
