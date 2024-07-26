class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    
    bool isCycle(int V, vector<int> adj[]) {
        unordered_map<int,bool> visited;
        for(int i=0;i<V ;i++){
            if(!visited[i]){
                bool ans = isCyclic(i,visited,adj);
                if(ans==1){
                    return 1;
                }
            }
            
        }
        return 0;
    }
    bool isCyclic(int src , unordered_map<int,bool> &visited,vector<int> adj[]){
        unordered_map<int,int> parent;
        parent[src]=-1;
        visited[src]=1;
        queue<int> q;
        q.push(src);
        while(!q.empty()){
            int front=q.front();
            q.pop();
            for(auto neighbour:adj[front]){
                if(visited[neighbour] && neighbour != parent[front]){
                    return true;
                }
                else if(!visited[neighbour]){
                    q.push(neighbour);
                    visited[neighbour]=1;
                    parent[neighbour]=front;
                }
            }
        }
        return false;
        
    }
};