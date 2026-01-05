#include <iostream>
using namespace std;
//TOPOLOGICAL SORTING USING BFS(KAHN'S ALGORITHM)
class Solution{
    public:
    string findOrder(string dict[], int N, int K) {
        vector<int> adj[K];
        for(int i=0;i<N-1;i++){
            string s1 = dict[i];
            string s2 = dict[i+1];
            int len = min(s1.length(), s2.length());
            for(int j=0;j<len;j++){
                if(s1[j] != s2[j]){
                    adj[s1[j]-'a'].push_back(s2[j]-'a');
                    break;
                }
            }
        }
        vector<int> inDegree(K,0);
        for(int i=0;i<K;i++){
            for(auto it: adj[i]){
                inDegree[it]++;
            }
        }
        queue<int> q;
        for(int i=0;i<K;i++){
            if(inDegree[i] == 0){
                q.push(i);
            }
        }
        string ans = "";
        while(!q.empty()){
            int node = q.front();
            q.pop();
            ans += char(node + 'a');   
            for(auto it: adj[node]){
                inDegree[it]--;
                if(inDegree[it] == 0){
                    q.push(it);
                }
            }
        }
        return ans;
    }

};
int main() {
    Solution sol;
    string dict[] = {"baa", "abcd", "abca", "cab", "cad"};
    int N = 5; // Number of words
    int K = 4; // Number of unique characters
    string order = sol.findOrder(dict, N, K);
    cout << "The order of characters in the alien language is: " << order << endl;
    return 0;
}