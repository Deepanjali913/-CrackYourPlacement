class Solution {
public:
    bool dfs(vector<vector<char>> &board , string &word , int row , int col , int index){
        if(index == word.size()) return true  ;
        if(row < 0 || col<0 || row >= board.size() || col>=board[0].size() || word[index] != board[row][col]){
            return false ;
        }
        char temp = board[row][col];
        board[row][col] = '*';
        int dx[4] = {-1,1,0,0};
        int dy[4]= {0,0,1,-1};
        for(int i=0 ; i<4 ; i++){
            int nr = row + dx[i];
            int nc = col + dy[i];
            if(dfs(board , word , nr , nc , index+1 )) return true ;

        }
        board[row][col]=temp;
        return false ;
    }

    bool exist(vector<vector<char>>& board, string word) {

        int n = board.size();
        int m = board[0].size();
        for(int i = 0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                if(dfs(board , word , i , j , 0)){
                    return true ;
                }
            }
        }
        return false ;
        
    }
};