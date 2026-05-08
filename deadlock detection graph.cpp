#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> adj;
vector<int> path;

// DFS function
bool dfs(int node) {
    // Add node to path (L list)
    path.push_back(node);

    // Check if node already exists in path (cycle)
    for (int i = 0; i < path.size() - 1; i++) {
        if (path[i] == node) {
            cout << "Cycle found: ";
            for (int x : path) cout << x << " ";
            cout << endl;
            return true;
        }
    }

    // Visit all neighbors
    for (int next : adj[node]) {
        if (dfs(next))
            return true;
    }

    // Backtrack (remove node)
    path.pop_back();
    return false;
}

int main() {
    int V = 5;
    adj.resize(V);

    // Create graph
    adj[0].push_back(1);
    adj[1].push_back(2);
    adj[2].push_back(1);
    adj[2].push_back(3);
    adj[3].push_back(4);
    // cycle here

    // Try from each node
    for (int i = 0; i < V; i++) {
        path.clear();
        if (dfs(i))
            return 0;
    }

    cout << "No cycle found\n";
    return 0;
}
