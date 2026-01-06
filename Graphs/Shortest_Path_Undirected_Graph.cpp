#include<iostream>
using namespace std;
class solution{
    public:
    vector<int> shortestPath(int N, int M, vector<pair<int,int>> edges[]){
        vector<int> dist(N, 1e9);
        dist[0] = 0;
        for(int i=0;i<N-1;i++){
            for(int u=0;u<N;u++){
                for(auto it: edges[u]){
                    int v = it.first;
                    int wt = it.second;
                    if(dist[u] + wt < dist[v]){
                        dist[v] = dist[u] + wt;
                    }
                }
            }
        }
        for(int i=0;i<N;i++){
            if(dist[i] == 1e9){
                dist[i] = -1;
            }
        }
        return dist;
    }

};
int main(){
    int N = 5;
    int M = 6;
    vector<pair<int,int>> edges[N];
    edges[0].push_back({1, 2});
    edges[0].push_back({2, 4});
    edges[1].push_back({2, 1});
    edges[1].push_back({3, 7});
    edges[2].push_back({4, 3});
    edges[3].push_back({4, 1});
    
    solution obj;
    vector<int> dist = obj.shortestPath(N, M, edges);
    
    for(int i=0;i<N;i++){
        cout << "Distance from node 0 to node " << i << " is " << dist[i] << endl;
    }
    return 0;
}