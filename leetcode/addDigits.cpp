class Solution {
public:
    vector<int> numbertodigit(int n) {
        vector<int> result;
        while(n!=0)
        {
            result.push_back(n%10);
            n = n/10;
        }
        reverse(result.begin(), result.end());
        return result;
    }
    int addDigits(int num) {
        vector<int> r = numbertodigit(num);
        int sum = 0;
        for(auto i = 0; i < r.size();i++)
        {
            sum = sum + r[i];
        }
        vector<int> re = numbertodigit(sum);
        int sum1 = 0;
        for(auto i = 0; i < re.size();i++)
        {
            sum1 = sum1 + re[i];
        }
        if (sum1 >= 10)
            return ((sum1 - 1)%9 +1);
        return sum1;
    }
};
