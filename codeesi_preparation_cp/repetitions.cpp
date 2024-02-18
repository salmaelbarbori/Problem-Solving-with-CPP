#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#include<map>
#include<vector>

int main () {
    string s;
    cin >> s;
    map<char, int> m;
    for(auto i = 0; i < s.length(); i++)
        m[s[i]]++;
    vector<pair<char, int>> result;
    for (auto m_:m)
        result.push_back(m_);
    //sort(result.begin(), result.end());
    sort(result.begin(), result.end(),
         [](const auto &a, const auto &b) {
             return a.second < b.second;
         });

    cout<<result[result.size() - 1].second;
}