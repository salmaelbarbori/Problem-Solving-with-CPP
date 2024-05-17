class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> v;
        int k = 2, h = -2;
        if (n % 2 == 0)
        {
           for(auto i = 1; i < n; i++)
        {
            v.push_back(k);
            v.push_back(h);
            k++;
            h--;
            n--;
        }
        }
        else
        {
        v.push_back(0);
        for(auto i = 1; i < n; i++)
        {
            v.push_back(k);
            v.push_back(h);
            k++;
            h--;
            n--;
        }
        }
        return v;
    }
};
