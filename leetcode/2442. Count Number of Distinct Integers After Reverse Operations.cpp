class Solution {
public:
   int reverseInt(int n)
    {
      int r=0;
       while(n!=0)
            {
                r = r*10 + n%10;
                n/=10;
            }
       return r;
    }
    
    int countDistinctIntegers(vector<int>& nums) {
    int cnt = 0;
    vector<int> b;
    for (auto i = 0; i < nums.size(); i++)
    {
        b.push_back(nums[i]);
        nums[i] = reverseInt(nums[i]);
    }
    for(auto a1:nums)
        b.push_back(a1);
    sort(b.begin(), b.end());
    for (auto i = 1; i < b.size(); i++)
    {
        if (b[i-1] == b[i])
        {
            b.erase(b.begin()+i);
            i--;
        }
    }
    for (auto b1:b)
        cnt++;
        return cnt;     
    }
};
