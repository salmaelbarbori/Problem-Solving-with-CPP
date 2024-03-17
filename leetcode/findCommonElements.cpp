class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int cnt = 0;
        for(auto i =0; i < nums1.size(); i++)
        {
            if(find(nums2.begin(), nums2.end(), nums1[i]) != nums2.end())
                cnt++;
        }
        vector<int> result;
        result.push_back(cnt);
        cnt= 0;
        for(auto i =0; i < nums2.size(); i++)
        {
            if(find(nums1.begin(), nums1.end(), nums2[i]) != nums1.end())
                cnt++;
        }
        result.push_back(cnt);
        return result;
    }
};
