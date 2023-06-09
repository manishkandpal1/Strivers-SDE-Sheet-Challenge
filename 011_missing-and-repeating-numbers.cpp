//https://www.codingninjas.com/codestudio/problems/missing-and-repeating-numbers_8230733?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	int i=0;
	pair<int,int>p;
	while(i<arr.size()){
		if(arr[i]!=arr[arr[i]-1]){
			swap(arr[i],arr[arr[i]-1]);
		}
	else{
		i++;
		}
	}
	for(int i=0;i<arr.size();i++){
		if(arr[i]!=i+1){
		p.first=(i+1);
		p.second=(arr[i]);
		}
	}
return p;
}
