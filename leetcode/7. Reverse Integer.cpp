class Solution {
public:
    int reverse(int x) {
        int sign = 0;
        if (x < 0)
            sign = 1;
        int temp = abs(x);
        std::vector<int> v;
        while (temp != 0)
        {
            v.push_back(temp%10);
            temp /= 10;
        }

        long long result=0;
        for (auto i = 0; i <  v.size(); ++i)
        {
            result = result*10 + v[i];
        }
        if (sign == 1)
            result = result*(-1);
        if (result < std::pow(2,31) || result > std::pow(2,31) -1)
            return 0;
        return result;
    }
};
