//https://www.codingninjas.com/codestudio/problems/find-duplicate-in-array_8230816?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.

	// sort(arr.begin(),arr.end());
	// for(int i=1;i<n;i++){
	// 	if(arr[i]==arr[i-1]){
	// 		return arr[i-1];
	// 	}
	// }
	int slow=arr[0],fast=arr[0];
	 do{
		 slow=arr[slow];
		 fast=arr[arr[fast]];
	 }while(slow!=fast);
	 fast=arr[0];
	 while(fast!=slow){
		 fast=arr[fast];
		 slow=arr[slow];
	 }
    return fast;
}
