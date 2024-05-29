class Solution {
public:
    bool nonzeroin(int n) {
         while (n > 0) {
        if (n % 10 == 0) {
            return false;
        }
        n /= 10;
    }
    return true;
    }
    vector<int> getNoZeroIntegers(int n) {
        int i,j;
        for(i = 1; i<=n; i++)
        {
            for (j = 1; j <=n;j++)
                if ((i+j)==n && nonzeroin(i) && nonzeroin(j))
                    return {i, j};
        }
        return {0};
    }
};
