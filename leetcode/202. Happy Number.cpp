class Solution {
public:
    vector<int> digits(int n)
    {
        vector<int> ans;
        while (n != 0)
        {
            ans.push_back(n%10);
            n = n / 10;
        }
        return ans;
    }
    bool isHappy(int n) {
        unordered_set<int> seen;
        while (n != 1 && seen.find(n) == seen.end()) {
            seen.insert(n);
            int sum = 0;
            vector<int> digits_list = digits(n);
            for (int digit : digits_list) {
                sum += digit * digit;
            }
            n = sum;
        }
        return n == 1;
    }
};
