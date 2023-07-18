//https://www.codingninjas.com/studio/problems/bfs-in-graph_8230763?challengeSlug=striver-sde-challenge

void adjlist(unordered_map<int, set<int>> &adj,vector<pair<int, int>> &edges){

for (int i = 0; i < edges.size();i++) {
  int u = edges[i].first;
  int v = edges[i].second;
  adj[u].insert(v);
  adj[v].insert(u);
     }
 }

 

void bfs(unordered_map<int,set<int>> &adj,unordered_map<int,bool> &visited,int node,vector<int> &ans ){
   queue<int>q;
   q.push(node);
   visited[node]=1;

   while(!q.empty()){
       int frontnode=q.front();
       q.pop();
       ans.push_back(frontnode);

       for(auto i:adj[frontnode]){
           if(!visited[i]){
               visited[i]=1;
               q.push(i);
           }
       }
   }
}

 

vector<int> BFS(int vertex, vector<pair<int, int>> edges){
    unordered_map<int,set<int>>adj;
    unordered_map<int,bool>visited;
    vector<int>ans;
    adjlist(adj,edges);
  
    for(int i=0;i<vertex;i++){
        if(!visited[i]){
            bfs(adj,visited,i,ans);
        }
    }
  
    return ans;
}
