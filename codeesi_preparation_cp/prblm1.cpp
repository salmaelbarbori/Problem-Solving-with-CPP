#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
/*int binary_search(vector<int> v, int t){
    int l = 0, r = v.size() - 1;
    int counter = 0;
    while(l<=r){
        int m = l + (r-l)/2;
        if (v[m] < t)
        {
            counter = m + 1;
            l = m + 1;
        }
        else
            r = m - 1;
    }
    return counter;
}*/
int main () {
int n;
cin >> n;
vector<int> v(n);
for (auto i = 0; i < n;i++)
{
    int val;
    cin >>val;
    v[i] = val;
}
sort(v.begin(), v.end());
int q;
cin >> q;
vector<int>v2(q);
for(auto j = 0;j<q;j++)
{
    int val2;
    cin >>val2;
    v2[j] = val2;
}
for (auto i = 0; i < v2.size();i++)
{
    //int c = binary_search(v, v2[i]);
    int c = upper_bound(v.begin(), v.end(), v2[i]) - v.begin();
        cout<<c<<endl;
}
}