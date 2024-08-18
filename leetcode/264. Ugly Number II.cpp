class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> ans(n);
        ans[0] = 1;
        int i = 0, j = 0, k = 0;
        for (auto h = 1; h < n; ++h)
        {
            int tmp = min ({2*ans[i], 3*ans[j], 5*ans[k]});
            ans[h] = tmp;
            if (tmp == 2*ans[i]) i++;
            if (tmp == 3*ans[j]) j++;
            if (tmp == 5*ans[k]) k++;
        }
        return ans[n-1];
    }
};
