class Solution {
public:
    int countOdds(int low, int high) {
        
        /*int cnt = 0;
        for (auto i = low; i <= high; i++)
            if(i%2!=0)
                cnt++;
        return cnt;*/
        
        if (low % 2 == 0 && high % 2 == 0)
            return ((high-low)/2);
        else if (low % 2 != 0 && high % 2 != 0)
            return ((high-low+1)/2 + 1);
        else
            return ((high-low)/2 + 1);
    }
};
