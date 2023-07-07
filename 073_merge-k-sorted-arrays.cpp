//https://www.codingninjas.com/studio/problems/merge-k-sorted-arrays_8230770?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h> 
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k){
    vector<int> ans;
    priority_queue<int,vector<int>,greater<int>> p;
    for(auto i:kArrays){
      for (auto j : i) {
        p.push(j);
      }
    }

    while(!p.empty()){
        ans.push_back(p.top());
        p.pop();
    }
    return ans;
}
