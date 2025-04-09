
void topoSort(int node,vector<pair<int, int>> adj[], vector<int>& vis, stack<int>& st){
  vis[node] =1;

  for(auto it:adj[node]){
      if(!vis[it.first]){
          topoSort(it.first,adj,vis,st);
      }
  }
  st.push(node);
}

vector<int> shortestPathInDAG(int n, int m, vector<vector<int>> &edges)
{
  // Write your code here
  vector<pair<int, int>> adj[n];

   for (int i = 0; i < m; i++) {
   int u = edges[i][0];
   int v = edges[i][1];
   int wt = edges[i][2];
   adj[u].push_back({v, wt});
}

stack<int> st;
vector<int> vis(n,0);

for(int i=0;i<n;i++){
    if(!vis[i]){
        topoSort(i,adj,vis,st);
    }
}

vector<int> dist(n,1e9);

dist[0]=0;

while(!st.empty()){
  int node = st.top();
  st.pop();


if(dist[node]!=1e9){
    for(auto it :adj[node]){
        int v = it.first;
        int wt = it.second;

        if(dist[node]+wt<dist[v]){
            dist[v] = dist[node]+wt;
        }
    }
  }
}

  for(int i=0;i<n;i++){
      if(dist[i]==1e9)
          dist[i]=-1;
  }

  return dist;
}
