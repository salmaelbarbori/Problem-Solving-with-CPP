class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int> m;
        for (auto ma: magazine)
            m[ma]++;
        for (auto r: ransomNote)
        {
            if (m[r] == 0)
                return false;
            m[r]--;
        }
        return true;
    }
};
