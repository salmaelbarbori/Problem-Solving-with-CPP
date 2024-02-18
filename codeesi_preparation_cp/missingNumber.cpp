#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main () {
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
long long n;
cin >> n;
vector<long long> arr;
arr.resize(n - 1);
long long sum = 0;
for(auto i=0;i < n - 1;i++)
{
    cin>>arr[i];
    sum += arr[i];
}
long long sum_ = n*(n+1)/2;
cout<<(sum_ - sum)<<endl; 
/*sort(arr.begin(), arr.end());
if (n == 2)
{
    cout<<arr[0] - 1;
    return 0;
}
for (auto i = 0; i < n - 2;i++)
{
    if (arr[i] + 1 != arr[i+1])
    {
        cout << arr[i] + 1 <<endl;
        break;
    }
}*/
}