<<<<<<< HEAD
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*int removeElement(vector<int>& nums, int val) {
    int i, result = 0;
    for (i = 0; i < nums.size(); i++)     
    {
        if(nums[i]==val)
         {
            nums.erase(nums.begin() + i);
            result++;
         }   
    } 
    return result;
}*/

int main () {
    vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 2, result = 0;
    sort(nums.begin(), nums.end());

    int count_ = count(nums.begin(), nums.end(), val);
    int i = 0;
    for (i = 0; i< nums.size();i++)
    {
        if (nums[i] == val)
            nums.erase(nums.begin()+i,nums.end() + i + count_);
        
        i=i+1;
    } 
    for (auto x: nums)
        cout<<x<<endl; 

}
=======
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
    sort(nums.begin(), nums.end());

    int index = 0;
    
    for (int i = 0; i < nums.size();i++)
    {
        if (nums[i] != val)
        {
            nums[index] = nums[i];
            index++;
        }    
    } 
    return index;
    }
};
>>>>>>> 8a618500aeff0979398d35ae4ec95b4a39692a46
