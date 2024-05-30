class Solution {
public:
    int countTriplets(vector<int>& arr) {
      int cnt = 0;
        int n = arr.size();
        for (int i = 0; i < n; ++i) {
            int xor_sum = 0;
            for (int j = i; j < n; ++j) {
                xor_sum ^= arr[j];
                if (xor_sum == 0 && j > i) {
                    cnt += (j - i);
                }
            }
        }
        return cnt;
    }
};
