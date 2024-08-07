class Solution {
public:
    int changeInt(int n)
    {
        int ans;
        while (n != 1)
        {
            if (n % 2 == 0)
                n = n / 2;
            else
                n = 3 * n + 1;
            ans += 1;
        }
        return ans;
    }
    int getKth(int lo, int hi, int k) {
        vector<vector<int>> ans;
        for (auto i = lo; i <= hi; ++i)
        {
            int tmp = changeInt(i);
            vector<int> t = {tmp, i};
            ans.push_back(t);
        }
        sort(ans.begin(), ans.end());
        return ans[k-1][1];
        
    }
};
