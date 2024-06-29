class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> answer;
        int sum = 0, i;
        vector<int> sumleft;
        vector<int> sumright;
        sumleft.push_back(0);
        for (i = 0; i < nums.size() - 1; ++i)
        {
            sum = sum + nums[i];
            sumleft.push_back(sum);
        }
        sumright.push_back(0);
        sum = 0;
        for (i = nums.size() - 1; i > 0; --i)
        {
            sum = sum + nums[i];
            sumright.push_back(sum);
        }
        reverse(sumright.begin(), sumright.end());
        for (i = 0; i < nums.size(); i++)
            answer.push_back(abs(sumright[i]-sumleft[i]));
        return answer;
    }
};
