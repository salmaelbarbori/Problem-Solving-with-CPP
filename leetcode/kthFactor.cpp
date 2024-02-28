class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> temp;
        for (auto i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                temp.push_back(i);
            }
        }
        if (k <= temp.size())
        {
            return temp[k - 1];
        }
        return -1;
    }
};
