class Solution {
public:
    bool find(vector<vector<char>> &board,int i,int j,string s,int I)
    {
        if(I==s.length())return true;
        bool x=false;
        board[i][j]^='-';
        if(j<board[0].size()-1 && board[i][j+1]==s[I] && find(board,i,j+1,s,I+1))x=true;
        else if(i<board.size()-1 && board[i+1][j]==s[I] && find(board,i+1,j,s,I+1))x=true;
        else if(i>0 && board[i-1][j]==s[I] && find(board,i-1,j,s,I+1))x=true;
        else if(j>0 && board[i][j-1]==s[I] && find(board,i,j-1,s,I+1))x=true;
        board[i][j]^='-';
        return x;
    }
    bool exist(vector<vector<char>>& board, string word) {
        pair<int,int> ptr;
        for(int i=0;i<board.size();i++)
            for(int j=0;j<board[0].size();j++)
                if(board[i][j]==word[0])
                    if(find(board,i,j,word,1))return true;
        return false;
    }
};