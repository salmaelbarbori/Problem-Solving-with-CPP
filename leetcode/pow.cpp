class Solution {
public:
    double myPow(double x, int n) {
      
    /*double result = 1;
        if (n < 0)
        {
            for (auto i = 1; i <= abs(n); i++)
        {
            result = result / x;
        }
        return result;
        }
        for (auto i = 1; i <= n; i++)
        {
            result = result * x;
        }
        return result;*/
        return (powl(x,n));

    }
};
