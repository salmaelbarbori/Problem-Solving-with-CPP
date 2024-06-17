class Solution {
public:
    bool judgeSquareSum(int c) {
        long long right = sqrt(c), left = 0;
        while (left<=right)
        {
            if (right*right + left*left == c)
                return true;
            else if (right*right + left*left > c)
                right--;
            else 
                left++;
        }
        return false;
    }
};
