class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        sort(target.begin(), target.end());
        sort(arr.begin(), arr.end());
        int i, n = arr.size();
        for(i = 0; i < n; ++i)
            if (arr[i] != target[i])
                return false;
        return true;
    }
};
