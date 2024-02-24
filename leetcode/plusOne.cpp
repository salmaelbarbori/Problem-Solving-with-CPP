class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if (digits.size() == 1)
        {
            if (digits[0] == 9)
            {
                digits[0] = 1;
                digits.push_back(0);
                return digits;
            }
                
            else {
                digits[0] = digits[0] + 1;
                return(digits);
            }
        }
        digits[digits.size()-1] = digits[digits.size()-1]+1;
        return digits;

    }
};
