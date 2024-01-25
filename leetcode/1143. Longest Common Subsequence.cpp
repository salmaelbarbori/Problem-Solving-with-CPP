class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int l1, l2;
        l1 = text1.length(); l2 = text2.length();

        int arr[l1+1][l2+1];
        memset(arr, 0, sizeof arr);

        for (auto i = 1; i <= l1;i++)
        {
            for(auto j = 1;j <= l2; j++)
            {
                if(text1[i - 1] == text2[j-1])
                    arr[i][j] = arr[i - 1][j - 1] + 1; 
                else
                    arr[i][j] = max(arr[i - 1][j], arr[i][j - 1]);
            }
        }

        return arr[l1][l2];
    }
};
