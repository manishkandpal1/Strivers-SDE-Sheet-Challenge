//https://www.codingninjas.com/studio/problems/rat-in-a-maze-all-paths_8230705?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h> 
void ratInMazeHelper(vector<vector<int>> &maze,int i,int j,vector<int> &ds,vector<vector<int>> &ans){
  int n = maze.size();
  if(i < 0 || j < 0 || i >= n || j >= n)return ;
  if(i == n-1 && j == n-1){
    ds[n*n-1] = 1;
    ans.push_back(ds);
    return ;
  }
  if(maze[i][j] == 0 || maze[i][j] == 2)return ;

  maze[i][j] = 2;
  ds[(n*i)+j] = 1;

  ratInMazeHelper(maze, i+1, j, ds, ans); 
  ratInMazeHelper(maze, i-1, j, ds, ans); 
  ratInMazeHelper(maze, i, j-1, ds, ans); 
  ratInMazeHelper(maze, i, j+1, ds, ans); 

  ds[(n*i)+j] = 0;
  maze[i][j] = 1;
}
vector<vector<int> > ratInAMaze(vector<vector<int> > &maze, int n){
  vector<vector<int> > ans;
  vector<int> ds(n*n, 0);
  ratInMazeHelper(maze, 0, 0, ds, ans);
  return ans;
}
