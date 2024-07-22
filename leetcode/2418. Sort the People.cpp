class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int, string>> m;
        for (auto i = 0; i < names.size(); ++i)
            m.push_back({heights[i], names[i]});
        sort(m.rbegin(), m.rend());
        vector<string> sortedNames;
        for (const auto& person : m) {
            sortedNames.push_back(person.second);
        }
        return sortedNames;
    }
};
