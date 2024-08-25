class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       vector<int> v;for(auto i=0;i<nums1.size();++i) v.push_back(nums1[i]);for(auto j=0;j<nums2.size();++j) v.push_back(nums2[j]); sort(v.begin(),v.end()); if(v.size()%2==0) return((double)(v[v.size()/2-1]+v[v.size()/2])/2);return v[v.size()/2]; 
    }
};
