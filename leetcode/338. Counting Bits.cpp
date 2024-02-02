class Solution {
public:
    int numberBinary (int n) {
    int count = 0;
    while(n>0)
    {
        if (n%2)
            count++;
        n=n/2;
    }
    return count;
    }
    vector<int> countBits(int n) {
        vector<int> result;
        for (auto i = 0; i <= n; i++)
        {
            int count_ = numberBinary (i);
            result.push_back(count_);
        }
        return result;
    }
};
