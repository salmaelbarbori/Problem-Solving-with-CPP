class Solution {
public:
    vector<int> pancakeSort(vector<int>& arr) {
        vector<int>p;
        for (auto a:arr)
            p.push_back(a);
        sort(p.begin(), p.end());
        for (auto i = 0; i < arr.size(); ++i)
        {
            if (p[i] != arr[i])
                reverse(arr.begin(), arr.end());
        }
        return arr;
    }
};
