void bfs(vector<int> adj[],vector<int> &ans,unordered_map<int,bool> &visited,int node){
      queue<int> q;
      q.push(node);
      visited[node]=1;
      while(!q.empty()){
          int frontNode=q.front();
          q.pop();
          ans.push_back(frontNode);
          for(auto i : adj[frontNode]){
              if(!visited[i]){
                  q.push(i);
                  visited[i]=1;
              }
          }
      }
  }