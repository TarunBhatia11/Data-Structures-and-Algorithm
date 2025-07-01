class Solution {
public:

    bool dfs(int i, int j, int cn, int r, int c, vector<vector<char>>& board, string word){
        if(cn == word.size()) return true;
        if(i<0 || j<0 || i>=r || j>=c || board[i][j]!=word[cn]) return false;

        char temp = board[i][j];
        board[i][j] = '#';

        bool found = dfs(i+1, j, cn+1, r , c, board, word) || dfs(i-1, j, cn+1, r , c, board, word) || dfs(i, j+1, cn+1, r , c, board, word) || dfs(i, j-1, cn+1, r , c, board, word);

        board[i][j] = temp;
        return found;

}



    bool exist(vector<vector<char>>& board, string word) {
        int r = board.size();
        int c = board[0].size();

        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if((board[i][j] == word[0]) && dfs(i,j,0,r,c, board, word))
                return true;
            }
        }
        return false;
    }
};
