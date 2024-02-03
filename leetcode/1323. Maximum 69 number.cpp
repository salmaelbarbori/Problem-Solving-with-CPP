class Solution {
public:
    int maximum69Number (int num) {
        int temp = num;
        vector<int> result;
        while (temp != 0)
        {
            result.push_back(temp%10);
            temp /= 10;
        }
        reverse(result.begin(), result.end());
        int signal = 0;
        for (auto i = 0; i <  result.size(); ++i)
        {
            if (signal == 0 && result[i] == 6)
            {
                result[i] = 9;
                signal = 1;
            }
        }
        int sum = 0;
        for (auto r:result)
        {
            sum = sum*10  +r;
        }
        return sum;
    }
};
