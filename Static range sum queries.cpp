#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main () {
    long long int n, q, input;
    cin >> n >> q;
    vector<int> tab(n);
    for (auto i = 0; i < n; i++)
        cin >> tab[i];

    vector<long long int> pre(n + 1);
    
    pre[0] = tab[0];
    for (int i = 1; i < n; i++)
        pre[i] = pre[i - 1] + tab[i];
    
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--,r--;
        long long int sum = (l > 0) ? pre[r] - pre[l - 1] : pre[r];
        cout << sum << endl;
    }
    return 0;
}
