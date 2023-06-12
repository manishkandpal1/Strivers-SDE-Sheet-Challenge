//https://www.codingninjas.com/codestudio/problems/day-6-majority-element_8230731?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	map<int,int>mp;
	for(int i=0;i<n;i++){
		mp[arr[i]]++;
	}
	int x=n/2;
	for(auto i:mp){
		if(i.second>x){
			return i.first;
		}
	}
	return -1;
}
