//Set DS stores the nodes in ascending order of their distances from the source node.
//set will erase already existing paths if we find a shorter path to the same node.
#include <iostream>
#include <vector>
#include <set>
using namespace std;
class Solution {
public:
    vector<int> dijkstra(int V, vector<pair<int, int>> adj[], int S) {
        vector<int> dist(V, 1e9);
        dist[S] = 0;
        set<pair<int, int>> st;
        st.insert({0, S});
        while (!st.empty()) { 
            auto it = *(st.begin());
            int node = it.second;
            int dis = it.first;
            st.erase(it);
            for (auto neighbor : adj[node]) {
                int v = neighbor.first;
                int wt = neighbor.second;
                if (dis + wt < dist[v]) {
                    if (dist[v] != 1e9) {// If dist[v] is not infinity, it means it's already in the set
                        st.erase({dist[v], v}); // Erase the existing entry for node v
                    }
                    dist[v] = dis + wt;
                    st.insert({dist[v], v});
                }
            }
        }
        return dist;
    }
};
int main() {
    int V = 5;
    vector<pair<int, int>> adj[V];
    adj[0].push_back({1, 10});
    adj[0].push_back({2, 3});
    adj[1].push_back({2, 1});
    adj[1].push_back({3, 2});
    adj[2].push_back({1, 4});
    adj[2].push_back({3, 8});
    adj[2].push_back({4, 2});
    adj[3].push_back({4, 7});
    adj[4].push_back({3, 9});

    Solution sol;
    vector<int> distances = sol.dijkstra(V, adj, 0);

    for (int i = 0; i < V; i++) {
        cout << "Distance from node 0 to node " << i << " is " << distances[i] << endl;
    }
    return 0;
}