class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long sum = 0;
        for (auto i = 0; i < chalk.size(); ++i)
            sum += chalk[i];
        k%=sum;
        for(auto j = 0; j < chalk.size(); ++j)
        {
            if (chalk[j] > k)
                return j;
            k -= chalk[j];
        }
            return -1;
    }
};
