#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

bool fact(int n) {
 for (auto i = 1;;i++)
 {
    if(n%i==0)
        n/=i;
    else
        break;
 }
 if (n==1)
    return true;
  return  false;
}

bool check(int n) {
    if (isPrime(n) && fact(n))
        return true;
    else 
    return false;
}

int main () {
int x;
cin >> x;
if(x<=1)
    cout<<-1<<endl;
else{
int j = x;
while(j>1)
{
    if(check(j))
    {
        cout <<j<< endl;
        return 0;
    }
    j--;
}
}
}