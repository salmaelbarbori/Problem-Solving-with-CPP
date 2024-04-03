class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        
        int k = 0;
        for(auto i = 0; i < board.size(); i++)
        {
            
            for(auto j = 0; j < board[i].size(); j++)
                if (find(board[i].begin(), board[i].end(), word[k]) != board[i].end())
                    k++;
        }
        if(k == word.length())
            return true;
        return false;
    }
};
