class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> allowed_set(allowed.begin(), allowed.end());
        int cnt = 0;
        for (const auto& word : words) {
            bool consistent = true;
            for (char c : word) {
                if (allowed_set.find(c) == allowed_set.end()) {
                    consistent = false;
                    break;
                }
            }
            if (consistent) {
                cnt++;
            }
        }
        return cnt;
    }
};
