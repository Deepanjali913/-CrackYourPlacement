class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int r = board.size();
        int c = board[0].size();
        vector<vector<int>> copy(r , vector<int> (c , 0));
        for(int i=0 ; i<r ; i++){
            for(int j=0 ; j<c ; j++){
                copy[i][j] = board[i][j];
            }
        }
        for(int i=0 ; i<r ; i++){
            for(int j=0 ; j<c ; j++){
                int liveCounts = 0 ;
                for(int k = -1 ; k<=1 ; k++){
                    for(int l=-1 ; l<=1 ; l++){
                        int row = i + k ;
                        int col = j + l ;
                        if(row>=0 && row<r && col>=0 && col<c && copy[row][col]==1){
                            liveCounts++;
                        }

                    }
                }
                if(copy[i][j] == 1) {
                    liveCounts--;
                }
                if(copy[i][j]==1 && (liveCounts<2 || liveCounts>3)) board[i][j]=0;
                if(copy[i][j]==0 && liveCounts==3) board[i][j]=1;
            }
        }
        
    }
};