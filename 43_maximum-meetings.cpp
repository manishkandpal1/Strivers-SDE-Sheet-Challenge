//https://www.codingninjas.com/studio/problems/maximum-meetings_8230795?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h> 
using namespace std;
vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {
    vector<pair<int,pair<int,int>>> ans;
    for(int i=0;i<start.size();i++){
         ans.push_back({end[i], {i+1, start[i]}});
    }

    sort(ans.begin(),ans.end());
    int n=ans.size();
    int e = -1;
    
    vector<int> res;
     for(auto val : ans){
        if(val.second.second>e-1){
            res.push_back(val.second.first);
            e = val.first+1;
        }
    }
     return res;
}
