class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> result;
        for (size_t i = 0; i < l.size(); ++i) {
            vector<int> temp;
            for (int j = l[i]; j <= r[i]; ++j) {
                temp.push_back(nums[j]);
            }
            sort(temp.begin(), temp.end());
            bool isArithmetic = true;
            int diff = temp[1] - temp[0];
            for (size_t k = 1; k < temp.size() - 1; ++k) {
                if (temp[k + 1] - temp[k] != diff) {
                    isArithmetic = false;
                    break;
                }
            }
            result.push_back(isArithmetic);
        }
        return result;
    }
};
