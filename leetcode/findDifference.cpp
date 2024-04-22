class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> result;
        vector<int> v1;
        vector<int> v2;
        for (auto i = 0; i < nums1.size(); i++)
        {
            if(find(nums2.begin(), nums2.end(), nums1[i]) == nums2.end() &&
              find(v1.begin(), v1.end(), nums1[i]) == v1.end())
                v1.push_back(nums1[i]);
        }
        for (auto i = 0; i < nums2.size(); i++)
        {
            if(find(nums1.begin(), nums1.end(), nums2[i]) == nums1.end() &&
              find(v2.begin(), v2.end(), nums2[i]) == v2.end())
                v2.push_back(nums2[i]);
        }
        result.push_back(v1);
        result.push_back(v2);
        return result;
    }
};
