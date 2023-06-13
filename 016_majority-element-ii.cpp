//https://www.codingninjas.com/codestudio/problems/majority-element-ii_8230738?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr){
   unordered_map<int, int>m;    
    for(auto x: arr) m[x]++;
    int k = floor(arr.size() / 3);    
   vector<int>ans;
    for(auto x: m){        
      if(x.second > k)         
      ans.push_back(x.first);    
      }   
 return ans;
}
