class Solution {
public:
bool isPrime(int n)

{

   

   int i=2; 

    while(i<n)

    {

        if(n%i==0)

        return false;

    }

    return true;

}
public:    int maximumPrimeDifference(vector<int>& nums) {
    
    sort(nums.begin(),nums.end());
int i,j;
    for( i=0,j=nums.size()-1;i<=j;i++,j--)
    {
        if(isPrime(nums[i])&&isPrime(nums[j]))
        return abs(i-j);
    }

    return 0;    
    }
};
