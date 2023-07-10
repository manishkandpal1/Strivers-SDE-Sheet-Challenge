//https://www.codingninjas.com/studio/problems/combination-sum-ii_8230820?challengeSlug=striver-sde-challenge

#include<bits/stdc++.h>
void solve(vector<int>arr , int n , int target , vector<int>&ds , vector<vector<int>>&ans , int ind){
    if (target == 0) {
        ans.push_back(ds);
        return;
    }

    for(int i =ind ; i<arr.size() ;i++){
        if(ind!=i && arr[i]==arr[i-1])
            continue;
        if(arr[i]> target)
            break;

        ds.push_back(arr[i]);
        solve(arr, n, target - arr[i], ds, ans, i+1);
        ds.pop_back();
    }
}

 

vector<vector<int>> combinationSum2(vector<int> &arr, int n, int target){
    sort(arr.begin() , arr.end());
    vector<vector<int>>ans;
    vector<int>ds;
    solve(arr , n , target , ds , ans , 0);
    return ans;
}
