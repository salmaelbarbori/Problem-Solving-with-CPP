class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        /*sort(nums.begin(), nums.end());
        for(auto i = 0; i < k - 1; i++)
        {
            nums.erase(max_element(nums.begin(), nums.end()));
        }
        return (nums[nums.size() - 1]);*/
        priority_queue<int, vector<int>, greater<int>> minHeap;
        for (auto num:nums)
        {
            minHeap.push(num);
            if (minHeap.size() > k)
                minHeap.pop();
        }
        return minHeap.top();
    }
};
