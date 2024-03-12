class Solution {
public:
    vector<int>
    createTargetArray(vector<int>& nums, vector<int>& index) {
       vector<int> target(nums.size());
//target.resize(nums.size(),0);
      auto i=0;
        while (i<nums.size())
        {
          target.insert(target.begin()+index[i],nums[i]);  
            i++;
        }
        /*for (auto i=0;i<nums.size();i++)
        target[index[i]]=nums[i];*/
       target.resize(nums.size());
    return target;
    } 
};   


