//https://www.codingninjas.com/studio/problems/minimum-number-of-platforms_8230720?challengeSlug=striver-sde-challenge

#include<bits/stdc++.h>
int calculateMinPatforms(int at[], int dt[], int n) {
    priority_queue<int,vector<int>,greater<int>>pq;
    int ans=0;
    vector<int>indexes(n);
    for (int i=0;i<n;i++) indexes[i]=i;
    sort (indexes.begin(),indexes.end(),[&](int i,int j){return at[i]<at[j];});
    for (int i=0;i<n;i++){
        int ind=indexes[i];
        while(!pq.empty() && pq.top()<at[ind]) pq.pop();
        pq.push(dt[ind]);
        int sz=pq.size();
        ans=max(ans,sz);
    }
    return ans;

}
