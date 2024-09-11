class Solution {
public:
    int minBitFlips(int start, int goal) {
       int cnt = 0;
       int diff = start^goal;
       while(diff > 0)
       {
        cnt += diff & 1;
        diff >>=1;

       }
       return cnt;

    }
};
