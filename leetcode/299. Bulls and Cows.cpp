class Solution {
public:
    string getHint(string secret, string guess) {
        map<char, int> m;
        map<char, int> n;
        int bulls = 0, cows = 0;
        for (int i = 0; i < secret.length(); ++i) {
            if (secret[i] == guess[i]) {
                bulls++;
            } else {
                m[secret[i]]++;
                n[guess[i]]++;
            }
        }
        for (auto& p : n) {
            char ch = p.first;
            cows += min(p.second, m[ch]);
        }
        return to_string(bulls) + "A" + to_string(cows) + "B";
    }
};
