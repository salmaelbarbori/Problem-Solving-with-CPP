class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> m;
        vector<string> v;
        int cnt = 0;
        for (auto a:arr)
            m[a]++;
        for (auto a:arr)
        {
            if (m[a] == 1)
                v.push_back(a);
        }
        if (v.size() < k)
            return "";
        return (v[k-1]);
    }
};
