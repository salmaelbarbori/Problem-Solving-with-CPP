class Solution {
public:
    string sortSentence(string s) {
        
        vector<string> words;
        string word;
        for (char c : s) {
            if (c == ' ') {
                words.push_back(word);
                word = "";
            } else {
                word += c;
            }
        }
        words.push_back(word);
        
        for(auto i = 0; i < words.size() - 1; i++)
        {
            for(auto j = i+ 1; j < words.size(); j++)
        {
            if(words[i].back() - '0'> words[j].back() - '0')
                swap(words[i], words[j]);
        }
        }
        
         string sortedSentence;
        for (const string& w : words) {
            sortedSentence += w.substr(0, w.size() - 1) + " "; 
        }
        sortedSentence.pop_back(); 
        
        return sortedSentence;
    }
};
