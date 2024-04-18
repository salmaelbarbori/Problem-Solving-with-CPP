class Solution {
public:
    bool palindrom(vector<int> number){
        int  i , j;
        for (i = 0, j = number.size() - 1; i <= j; i++, j--)
        {
            if (number[i] != number[j])
                return false;
        }
        return true;
    }
    vector<int> baseConvert(int n, int base)
    {
        vector<int> temp;
        while (n != 0)
        {
            temp.push_back(n%base);
            n = n / base;
        }
        reverse(temp.begin(), temp.end());
        return temp;
    }
    bool isStrictlyPalindromic(int n) {
        for (auto i = 2; i <= n - 2; i++)
        {
            int temp = n;
            vector<int> b = baseConvert(temp, i);
            bool p = palindrom(b);
            if (!p)
                return false;
        }
        return true;
    }
};
