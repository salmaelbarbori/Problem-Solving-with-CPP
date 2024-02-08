class Solution {
public:
    int numSquares(int n) {
       for (auto i = 1; i < n / 2; ++i)
       {
           if (i*i == n)
                return i;
       }
       
    }
};
