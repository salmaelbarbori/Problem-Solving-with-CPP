#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

void balanceCandies () {
    int n;
    cin >> n;
    int count1 = 0, count2 = 0;
    for (auto i = 0; i <  n; i++)
    {
        int temp;
        cin >> temp;
        if(temp == 1)
            count1++;
        else
            count2++;
    }
    /*int sum = (count1 + count2 * 2) ;
    if ( sum % 2 != 0)
        cout << "NO\n";
    else {
        if (sum % 2 == 0 || (sum % 2 == 1 && count1 != 0))
            cout << "YES\n";
        else
            cout <<"NO\n";
    }*/
    if (count1 % 2 == 0 && count2 % 2 == 0)
        cout << "YES\n";
    else if (count2 % 2 != 0 && count1 % 2 == 0 && count1 > 0)
        cout <<"YES\n";
    else
        cout <<"NO\n";
}
int main () {
    int t;
    cin >> t;
    while (t--)
        balanceCandies();
}