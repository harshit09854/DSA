#include <unordered_map>
#include <queue>
#include <list>
#include <string>
using namespace std;

bool isCyclicBFS(int src, unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adj) {
    unordered_map<int, int> parent;

    parent[src] = -1;
    visited[src] = true;
    queue<int> q;
    q.push(src);

    while (!q.empty()) {
        int front = q.front();
        q.pop();

        for (auto neighbor : adj[front]) {
            if (visited[neighbor] && neighbor != parent[front]) {  
                return true; 
            }
            else if (!visited[neighbor]) {
                q.push(neighbor);
                visited[neighbor] = true;
                parent[neighbor] = front;
            }
        }
    }
    return false; 
}

bool isCyclicDFS(int node,int parent, unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adj) {
       visited[node] =true;

       for(auto neighbor:adj[node]){
           if(!visited[neighbor]){
              bool cycleDetected =  isCyclicDFS(neighbor,node,visited,adj) ;
              if(cycleDetected)
                  return true;
           }
           else if(neighbor !=parent){
               return true;
           }
       }
       return false;


}

string cycleDetection(vector<vector<int>>& edges, int n, int m) {
    unordered_map<int, list<int>> adj;

    
    for (int i = 0; i < m; i++) {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    unordered_map<int, bool> visited;
    
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            bool ans = isCyclicDFS(i,-1, visited, adj);
            if (ans) {
                return "Yes"; 
            }
        }
    }
    return "No"; // No cycle detected in any component
}