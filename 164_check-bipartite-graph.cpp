//https://www.codingninjas.com/studio/problems/check-bipartite-graph_8230761?challengeSlug=striver-sde-challenge

#include<bits/stdc++.h>

bool dfs(int node, int col, vector<int>&vis, vector<int>adj[]){
   vis[node]=col;
   for(auto it:adj[node]){
       if(vis[it]==-1){
           if(dfs(it,!col,vis,adj) == false){
               return false;
           }
       }

       else if(vis[it] == col){
           return false;
       }
   }
   return true;
}

bool isGraphBirpatite(vector<vector<int>> &edges) {
    int n=edges.size();
    int m=edges[0].size();
    vector<int>vis(n,-1);
    vector<int>adj[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(edges[i][j]){
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }
    for(int i=0;i<n;i++){
        if(vis[i]==-1){
            if(dfs(i,0,vis,adj) == false){
                return false;
            }
        }
    }
    return true;
}
