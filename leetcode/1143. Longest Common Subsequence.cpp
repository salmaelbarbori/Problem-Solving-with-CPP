class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n, m;
        if (text1.length() > text2.length())
        {
            n = text2.length();
            m = text1.length();
        }
        else if (text1.length() < text2.length())
        {
            n = text1.length();
            m = text2.length();
        }
        else
        {
            n = text2.length();
            m = text1.length();
        }
        int counter = 0;
        /*for (auto i = 0; i < m; i++)
        {
            for (auto j = 0; j < n;j++)
            {
                if (text1[i] == text2[j])
                    counter++;
            }
        }*/
        
        string longer, shorter;
        if (text1.length() > text2.length())
        {
            longer = text1;
            shorter = text2;
        }
        else 
        {
             longer = text2;
             shorter = text1;
        }
        int i = 0;
        for (auto c:longer)
        {
            if (c == shorter[i])
            {    counter++; i++;}

        }
        return counter;
    }
};
