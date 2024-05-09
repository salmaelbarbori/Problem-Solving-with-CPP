class Solution {
public:
    int minimumOperations(vector<int>& nums) {
int cnt=0;
class
   sort(nums.begin(),nums.end());

   for (auto i=0;i<nums.size();i++)

   {

       if(nums[i]!=0)

       {

           cnt++;

           int small=nums[i];

           for(auto j=i;j<nums.size();j++)

           {

               nums[j]=small-nums[j];

           }

       }

   }

   return cnt;    }
};
