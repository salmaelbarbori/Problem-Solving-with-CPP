class Solution {
public:
    int countPrimes(int n) {
        if(n == 0 || n==1)
            return 0;
        int arr[n];
        for(auto i = 0; i < n; i++)
            arr[i] = 1;
        arr[0] = 0;
        arr[1] = 0;
        for (auto i = 2; i < n; i++)
        {
            if (arr[i] == 1)
            {
                for (auto j = 2 ; i*j < n; j++)
                {
                    arr[i*j]=0;
                }
            }
        }
        int cnt =0;
        for (auto i = 2; i < n; i++)
        {
            if(arr[i] == 1)
                cnt++;
        }
        
        return cnt;
    }
};
