class Solution {
public:
    int getLucky(string s, int k) {
        vector<int> v1;     
        for (auto s1 : s) {
            int pos = s1 - 'a' + 1;
            while (pos > 0) {
                v1.push_back(pos % 10);
                pos /= 10;
            }
        }
        int sum = 0;
        for (int j = 0; j < k; ++j) {
            sum = 0;
            for (auto num : v1) {
                sum += num;
            }
            if (j < k - 1) {
                v1.clear();
                while (sum > 0) {
                    v1.insert(v1.begin(), sum % 10);
                    sum /= 10;
                }
            }
        }
        return sum;
    }
};
