<<<<<<< HEAD
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      int i = 0, j = 0;
    for (i = m; i < n + m; i++)
    {
        nums1[i] = nums2[j];
        j++;
    }
    sort (nums1.begin (), nums1.end());
    
        
    }
int main () {
    int n, m;
    cin >> n >> m;
    vector<int> num1;
    vector<int> num2;
   
}
=======
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      int i = 0, j = 0;
    for (i = m; i < n + m; i++)
    {
        nums1[i] = nums2[j];
        j++;
    }
    sort (nums1.begin (), nums1.end());
    
        
    }
int main () {
    int n, m;
    cin >> n >> m;
    vector<int> num1;
    vector<int> num2;
   
}
>>>>>>> 8a618500aeff0979398d35ae4ec95b4a39692a46
