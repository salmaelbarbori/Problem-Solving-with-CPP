class Solution {
public:
    int fib(int n) {
        if (n == 0)
        return 0;
        if (n <= 2)
            return 1;

        int f[n+1];
        memset(f, 0, sizeof f);
        f[0] = 1;
        f[1] = 1;
        f[2] =1;
        for (auto i = 3; i <= n; i++)
            f[i] = f[i - 1] + f[i-2];
        return (f[n]);
        
    }
};
