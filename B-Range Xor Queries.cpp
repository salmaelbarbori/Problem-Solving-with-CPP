#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main () {
    long long int n, q;
    cin >> n >> q;

    vector <long  long int> tab(n);
    for (auto i = 0; i < n; i++)
        cin >> tab[i];
    
    vector <long long int> per(n);
    per[0] = tab[0];

    for (auto i = 1; i < n; i++)
        per[i] = per[i - 1] ^ tab[i];

    while (q--) {
        long long l, r, sum;
        cin >> l >> r;
        l--, r--;
        sum = per[r] ^ (l ? per[l - 1] : 0);
        cout << abs(sum) << endl;
    } 
}
