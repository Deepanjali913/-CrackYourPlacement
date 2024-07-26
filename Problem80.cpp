// User function template for C++

class Solution{
    public:
    bool isSafe(int nx,int ny,vector<vector<bool>> &vis,vector<vector<int>> &m,int n){
        if(nx>=0 && nx<n && ny>=0 && ny<n && vis[nx][ny] != 1 && m[nx][ny]==1){
            return 1;
        }
        else{
            return 0;
        }
    }
    void solve(int x , int y,vector<vector<int>> &m,int n,vector<string> &ans,vector<vector<bool>> &vis,string path){
        if(x==n-1 && y==n-1){
            ans.push_back(path);
            return ;
        }
        vis[x][y]=1;
        if(isSafe(x+1,y,vis,m,n)){
            solve(x+1,y,m,n,ans,vis,path+'D');
        }
        if(isSafe(x,y-1,vis,m,n)){
            solve(x,y-1,m,n,ans,vis,path+'L');
        }
        if(isSafe(x,y+1,vis,m,n)){
            solve(x,y+1,m,n,ans,vis,path+'R');
        }
        if(isSafe(x-1,y,vis,m,n)){
            solve(x-1,y,m,n,ans,vis,path+'U');
        }
        vis[x][y]=0;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> ans;
        string path="";
        if(m[0][0]==0){
            return ans;
        }
        vector<vector<bool>> vis(n,vector<bool>(n,0));
        solve(0,0,m,n,ans,vis,path);
        return ans;
        
        
        
    }
};

    