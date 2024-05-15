class Solution {
public:
    vector<int> arr;
    Solution(vector<int>& nums) {
        arr=nums;
    }
    
    int pick(int target) {
        int random = 0 + (rand() % arr.size());
        while(arr[random] != target)
            random = 0 + (rand() % arr.size());
        
        return random; 
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */
