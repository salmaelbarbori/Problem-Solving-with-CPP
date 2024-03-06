class Solution {
public:
    int xorOperation(int n, int start) {
        int arr[n];
        for (auto i =0; i < n; i++)
            arr[i] = start + 2*i;
        int sum = arr[0];
        for(auto i =1; i < n; i++)
            sum ^= arr[i];
        return sum;
    }
};
