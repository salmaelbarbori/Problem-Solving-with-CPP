class Solution {
public:
    int countVowelStrings(int n) {
        int c = ((n+1)*(n+2)*(n+3)*(n+4))/24;
        return (c);      
    }
};
