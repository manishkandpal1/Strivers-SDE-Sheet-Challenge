//https://www.codingninjas.com/studio/problems/k-most-frequent-elements_8230853?challengeSlug=striver-sde-challenge


#include <bits/stdc++.h> 
vector<int> KMostFrequent(int n, int k, vector<int> &arr){
    vector<int>ans;
    map<int,int>m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    priority_queue<pair<int,int>>pq;
    for(auto i:m){
        pq.push({i.second,i.first});
    }

    for(int i=1;i<=k;i++){
        ans.push_back(pq.top().second);
        pq.pop();
    }
    sort(ans.begin(),ans.end());
    return ans;
}
