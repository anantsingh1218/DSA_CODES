//define a queue
//create a visited array
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
class solution{
public:
    bool bfs(int src, vector<int> adj[], vector<int> &visited){
        queue<pair<int,int>> q;
        q.push({src,-1});
        visited[src] = 1;

        while(!q.empty()){
            int node = q.front().first;
            int parent = q.front().second;
            q.pop();

            for(auto it: adj[node]){
                if(!visited[it]){
                    visited[it] = 1;
                    q.push({it,node});
                }
                else if(parent != it){
                    return true;
                }
            }
        }
        return false;
    }

    bool isCycle(int V, vector<int> adj[]){
        vector<int> visited(V,0);

        for(int i=0;i<V;i++){
            if(!visited[i]){
                if(bfs(i,adj,visited)){
                    return true;
                }
            }
        }
        return false;
    }
};//TC->O(N+2E)
//SC->O(N)+O(N)