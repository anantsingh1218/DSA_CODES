//only works on DAG(Directed Acyclic Graph)
#include <iostream>
#include <vector>
#include <stack>
using namespace std;
class Solution {
    public:
    void dfs(int node, vector<int> &vis, stack<int> &st, vector<int> adj[]) {
        vis[node] = 1;
        for (auto it : adj[node]) {
            if (!vis[it]) {
                dfs(it, vis, st, adj);
            }
        }
        st.push(node);
    }
    vector<int> topoSort(int V, vector<int> adj[]) {
        stack<int> st;
        vector<int> vis(V, 0);
        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                dfs(i, vis, st, adj);
            }
        }
        vector<int> topo;
        while (!st.empty()) {
            topo.push_back(st.top());
            st.pop();
        }
        return topo;
    }
};//TC->O(N+E)+O(N)
//SC->O(N)+O(N)
//Note: The space complexity includes the stack space used for DFS and the stack used to store the topological order.