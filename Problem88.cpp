class Solution
{
	public:
	void topoSort(int node, vector<int> adj[],stack<int> &s,unordered_map<int,bool> &visited){
	    visited[node]=1;
	    for(auto neighbour:adj[node]){
	        if(!visited[neighbour]){
	            topoSort(neighbour,adj,s,visited);
	        }
	    }
	    s.push(node);
	    
	}
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    unordered_map<int,bool> visited;
	    stack<int> s;
	    vector<int> ans;
	    for(int i=0;i<V;i++){
	        if(!visited[i]){
	            topoSort(i,adj,s,visited);
	        }
	    }
	    while(!s.empty()){
	        ans.push_back(s.top());
	        s.pop();
	    }
	    return ans;
	}
};