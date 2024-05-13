class Solution {
public:
    int subtractProductAndSum(int n) {
        vector<int> v;
        int tmp;
        tmp = n;
        while(tmp!=0)
        {
            v.push_back(tmp%10);
            tmp /= 10;
        }
        int m=1, s=0, result;
        for (auto i = 0; i < v.size(); i++)
        {
            m=m*v[i];
            s=s+v[i];
        }
        result = m-s;
        return result;
        
    }
};
