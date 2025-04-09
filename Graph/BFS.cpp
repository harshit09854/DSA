#include <vector>
#include <queue>

using namespace std;

vector<int> bfsTraversal(int n, vector<vector<int>> &adj) {
    vector<int> bfsResult;       
    vector<bool> visited(n, false);
    queue<int> q;

    q.push(0);
    visited[0] = true;

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        bfsResult.push_back(node);

        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }

    