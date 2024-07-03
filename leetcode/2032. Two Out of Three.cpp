class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        set<int> unique_elements;
        vector<int> ans;

        for (int num : nums1) unique_elements.insert(num);
        for (int num : nums2) unique_elements.insert(num);
        for (int num : nums3) unique_elements.insert(num);
        
        for (int num : unique_elements) {
            int count = 0;
            if (find(nums1.begin(), nums1.end(), num) != nums1.end()) count++;
            if (find(nums2.begin(), nums2.end(), num) != nums2.end()) count++;
            if (find(nums3.begin(), nums3.end(), num) != nums3.end()) count++;
            if (count >= 2) {
                ans.push_back(num);
            }
        }
        return ans;
    }
};
