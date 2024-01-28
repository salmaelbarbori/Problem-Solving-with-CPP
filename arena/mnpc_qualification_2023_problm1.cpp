#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main () {
string s;
int q;
cin >> s;
cin >> q;
while (q--){
    int var;
    cin >>var;
    if (var == 0)
    {
        int idx;
        cin >>idx;
        char a;
        cin >> a;
        s[idx - 1] = a;
    }
    else 
    {
        string t;
        cin >> t;
        size_t f = s.find (t);
        if (f!=string::npos)
            cout<<f + 1<<endl;
        else
            cout << -1 <<endl;
    }
}
}
