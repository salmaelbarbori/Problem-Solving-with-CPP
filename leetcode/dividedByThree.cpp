class Solution {
public:
    bool isThree(int n) {
        int cnt;
        for (auto i = 1; i <= n; i++)
        {
            if (n % i == 0)
                cnt++;
        }
        if (cnt != 3)
            return false;
        return true;
    }
};
