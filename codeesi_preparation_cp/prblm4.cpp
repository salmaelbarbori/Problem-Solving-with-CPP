#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main () {
    int n, sum1=1,sum2=0;
    cin >> n;

    int tab[n];
    for (auto i = 0; i< n; i++)
        cin >>tab[i];
    int i = 0; int j = n-1;
    while(i<n && j>0  && sum1!=sum2)
    {
        sum1 = sum1+tab[i];
        sum2 = sum2+tab[j];
        if (sum1<sum2)
            i++;
        else if(sum1>sum2)
            j++;
        else
        {
            i++;j++;
        }
    }
    if (sum1 - 1 == sum2)
        cout << i+1 << endl;
    else
        cout << "0" << endl;
}