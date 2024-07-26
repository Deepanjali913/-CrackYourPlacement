class Solution {
public:
void dfs(int row,int col,vector<vector<char>>& grid,vector<vector<int> > &visited,int dx[],int dy[]){
    visited[row][col]=1;
    int n=grid.size();
    int m=grid[0].size();
    for(int i=0;i<4;i++){
        int nr=row+dx[i];
        int ncol=col+dy[i];
        if(ncol>=0 && ncol<m && nr>=0 && nr<n && !visited[nr][ncol] && grid[nr][ncol]=='1'){
            dfs(nr,ncol,grid,visited,dx,dy);
        }
    }
}
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int> > visited(n,vector<int>(m,0));
        int dx[4]={-1,+1,0,0};
        int dy[4]={0,0,1,-1};
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1' && !visited[i][j]){
                    count++;
                    dfs(i,j,grid,visited,dx,dy);
                }
            }
        }

        return count;
    }
};