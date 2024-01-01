#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int occurence (int tab[], int n) {
    if (n <= 2)    
        return (-1);
    sort(tab, tab + n);
    for (auto i = 0; i < n - 2; i++)
    {
        if (tab[i] == tab[i+1] && tab[i + 1] == tab[i+2])
            return(tab[i]);
    }
    return (-1);
}

int main () {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
    
        int tab[n];
        for (auto i = 0; i < n; i++)
            cin >> tab[i];

        cout << occurence(tab, n) << endl;
    }
}