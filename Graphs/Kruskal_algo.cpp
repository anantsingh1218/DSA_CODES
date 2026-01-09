#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class DisjointSet {
    vector<int> parent, rank;
public:
    DisjointSet(int n) {
        parent.resize(n+1);
        rank.resize(n+1, 0);
        for (int i = 0; i <= n; i++) {
            parent[i] = i;
        }
    }
    int findUPar(int node) {
        if (node == parent[node]) {
            return node;
        }
        return parent[node] = findUPar(parent[node]);
    }
    void unionByRank(int u, int v) {
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);
        if (ulp_u == ulp_v) return;
        if (rank[ulp_u] < rank[ulp_v]) {
            parent[ulp_u] = ulp_v;
        } else if (rank[ulp_v] < rank[ulp_u]) {
            parent[ulp_v] = ulp_u;
        } else {
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }
};
class Solution {
    public:
    int kruskalMST(int V, vector<vector<int>>& edges) {
        sort(edges.begin(), edges.end());
        DisjointSet ds(V);
        int mstWeight = 0;
        for (auto& edge : edges) {
            int u = edge[0];
            int v = edge[1];
            int weight = edge[2];
            if (ds.findUPar(u) != ds.findUPar(v)) {
                ds.unionByRank(u, v);
                mstWeight += weight;
            }
        }
        return mstWeight;
    }
};
