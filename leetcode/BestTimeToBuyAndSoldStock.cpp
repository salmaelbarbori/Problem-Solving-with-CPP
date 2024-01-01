#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main () {
    vector<int> prices = {7, 6,4,3,5, 1};
    

        auto minIt = std::min_element(prices.begin(), prices.end());
        int minIndex = std::distance(prices.begin(), minIt);

        if (minIndex == prices.size())
        {
            cout<<0<< endl;
            return 0;
        }    
        
        auto maxIterator = std::max_element(prices.begin()+minIndex + 1, prices.end());
        
        int max_ = *maxIterator, min_ = *minIt;
        int difference = max_ - min_;
        if (difference > 0)
            cout<<difference<< endl;
        else
            cout << 0 << endl;

        return 0;
}