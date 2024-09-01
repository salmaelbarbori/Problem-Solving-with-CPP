class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if(original.size() != n*m)
            return {};
        vector<vector<int>> v;
        for(auto i = 0; i < original.size(); i+=n)
        {
            vector<int> t;
            for(auto j = i; j < i+n; ++j)
                t.push_back(original[j]);
            v.push_back(t);
        }
        return v;
    }
};
