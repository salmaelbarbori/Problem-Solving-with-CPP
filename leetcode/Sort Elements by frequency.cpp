class Solution {
public:
    struct CompareSecond {
        bool operator()(const std::pair<char, int>& lhs, const std::pair<char, int>& rhs) const {
            return lhs.second > rhs.second; 
        }
    };

    std::string frequencySort(std::string s) {
        std::sort(s.begin(), s.end());
        std::map<char, int> map_;
        for (auto c : s)
            map_[c]++;
        
        std::vector<std::pair<char, int>> v(map_.begin(), map_.end());
        std::sort(v.begin(), v.end(), CompareSecond());
        
        std::string result = "";
        for (const auto& v1 : v) {
            for (int i = 0; i < v1.second; ++i) {
                result += v1.first;
            }
        }
        return result;
    }
};
