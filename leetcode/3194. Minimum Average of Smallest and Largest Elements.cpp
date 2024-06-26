class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        double ans=100;
        int n=nums.size();
        int l=0,r=n-1;
        while(l<r)
        {
            double avg=((double)nums[l]+(double)nums[r])/2;
            ans=min(ans,avg);
            l++;
            r--;
        }
        return ans;
    }
};
