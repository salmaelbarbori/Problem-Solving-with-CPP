class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> ans, prefixSum(arr.size()+1,0);
        prefixSum[0] = 0;
        for (auto j = 1; j <= arr.size(); ++j)
        {
            prefixSum[j] = prefixSum[j-1]^arr[j-1];
        }
        for (auto& query : queries) {
            int L = query[0];
            int R = query[1];
            ans.push_back(prefixSum[R + 1] ^ prefixSum[L]);
        }
        return ans;
    }
};
