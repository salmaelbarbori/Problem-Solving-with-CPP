#include<iostream>
#include<bits/stdc++.h>
#include<map>
#include <sstream>

using namespace std;
int main () {
int n, m;

map<string, string> msisdn;
map<string, string> imsi;
auto it1 = msisdn.begin(), it2 = imsi.begin();
cin >> n;
string initial, value, key;

while (n--)
{
    cin >> initial;
    istringstream iss (initial);
    getline(iss, key, ',');
    getline(iss, value);
    msisdn[key] = value;
}
//cout<< "ok1"<<endl;

cin >> m;
while (m--) {
    cin >> initial;
    istringstream iss (initial);
    getline(iss, key, ',');
    getline(iss, value);
    imsi[key] = value;
}
//cout<< "ok2"<<endl;
int sign = 0;
for (it1 = msisdn.begin(); it1 != msisdn.end(); ++it1) {
        for (it2 = imsi.begin(); it2 != imsi.end(); ++it2) {
            if (it1->first == it2->second)
            {
                cout << it1->first << "," << it1->second << "," << it2->first << endl;
                sign = 1;
            }
        }
    }
if (sign == 0)
    cout<<"nomatch"<<endl;
return 0;
}
