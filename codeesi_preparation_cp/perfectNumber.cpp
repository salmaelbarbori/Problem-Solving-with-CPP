#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
/*vector<int> numberDigit(){
    int value = 10000;
    vector<int> v;
    while (value != 0)
    {
        v.push_back(value%10);
        value =value / 10;
    }
    return v;
}*/
int numDigit(int n) {
    int sum = 0;
    while (n != 0)
    {
        sum = sum + n%10;
        n = n / 10;
    }
    return sum;
}
int main () {
    int k;
    cin >> k;
    int c = 0;
    int i = 1;
    while (c<k)
    {
        if (numDigit(i) == 10)
            c++;
        i++;
    }
    cout <<(i-1);
    return 0;
}
