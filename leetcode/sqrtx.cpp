class Solution {
public:
    int mySqrt(int x) {
        for (auto i = 1; i <= x; i++)
        {
            if (double(i)*double(i) == x)
                return i;
            else if (double(i)*double(i) > x)
                return (i-1);
        }
        return 0;
    }
};
