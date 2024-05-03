class Solution {
public:
    vector<int> numtodig(int n) {
        vector<int> v;
        while (n !=0)
        {
            v.push_back(n%10);n/=10;
        }
        reverse(v.begin(), v.end());
        return v;
    }
    int sumOfTheDigitsOfHarshadNumber(int x) {
        vector<int> v;
        v = numtodig(x);
        int s = 0;
        for(auto i:v)
        {
            s = s + i;
        }
        if(x%s == 0)
            return s;
        return -1;
    }
};
