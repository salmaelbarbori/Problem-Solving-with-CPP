/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int l = 0, r = n;
        long ans;
        while (l <= n)
        {
            ans = l + (r-l)/2;
            if (guess(ans) == -1)
            {
                r = ans - 1; 
            }
            else if(guess(ans) == 1)
            {
                l = ans + 1;
            }
            else
                return ans;
        }
        return l;
    }
};
