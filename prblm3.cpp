#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main () {
  int t;
  cin >> t;

  while(t--){
    int n;
    cin >> n;
    int tab[n];
    for (auto i = 0; i < n; i++)
    {
        cin >> tab[i];
    }
    int count = 0;
    for (auto i = 0; i < (n-2) ; i++)
    {
        if ((tab[i] + tab[i+2]) % 2 != 0)
            count++;    
    }
    if (count == 0)   cout << "YES"<< endl;
    else cout << "NO" << endl;

  } 
}