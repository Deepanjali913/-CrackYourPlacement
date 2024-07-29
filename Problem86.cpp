class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int V = graph.size();
        vector<vector<int>> graphRev(V) ;
        vector<int> indegree(V);
        for(int i=0 ; i<V ; i++){
            for(auto it : graph[i]){
                graphRev[it].push_back(i);
                indegree[i]++;
            }
        }
        queue<int> q;
        for(int i=0 ; i<V ; i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        vector<int> safeNodes;
        while(!q.empty()){
            int node = q.front();
            safeNodes.push_back(node);
            q.pop();
            for(auto it : graphRev[node]){
                indegree[it]--;
                if(indegree[it]==0) q.push(it);
            }
        }
        sort(safeNodes.begin(),safeNodes.end());
        return safeNodes;

    }
};