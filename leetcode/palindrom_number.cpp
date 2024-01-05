class Solution {
public:
    bool isPalindrome(int x) {
        long long int new_num = 0;
        int temp =x;
        while (temp>0)
        {
            new_num= new_num*10 + temp%10;
            temp/=10;
        }
        if (new_num== x)
            return true;
        return false;
    }
};
