class Solution {
public:
void dfs(vector<vector<int>> &image , int row , int col , int newColor , int iniColor , vector<vector<int>> &ans , int dx[] , int dy[]){
    int n = image.size();
    int m = image[0].size();
    ans[row][col]=newColor ;
    for(int i=0 ; i<4 ; i++){
        int nx=row+dx[i], ny = col+dy[i];
        if(nx>=0 && ny>=0 && nx<n && ny<m && ans[nx][ny]!=newColor && image[nx][ny]==iniColor){
            dfs(image , nx , ny , newColor , iniColor , ans , dx , dy);
        }
    }

}

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>> ans = image ;
        int inicolor = image[sr][sc];
        int dx[4]={0,0,1,-1};
        int dy[4]={-1,1,0,0};
        dfs(image , sr , sc , color , inicolor , ans , dx , dy );
        return ans ;
        
    }
};