//https://www.codingninjas.com/studio/problems/kth-smallest-and-largest-element-of-array_8230829?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h> 

vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	// Write your code here.
	vector<int>ans;
    sort(arr.begin(), arr.end());
     ans.push_back(arr[k-1]);
     ans.push_back(arr[n-k]);

     return ans;
}
