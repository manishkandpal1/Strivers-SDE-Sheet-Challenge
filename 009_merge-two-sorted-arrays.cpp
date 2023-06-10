//https://www.codingninjas.com/codestudio/problems/merge-two-sorted-arrays_8230835?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	int i,j,k;
	i=m-1,j=n-1,k=m+n-1;
	while(i>=0 && j>=0){
		if(arr1[i]<arr2[j]){
			arr1[k]=arr2[j];
			j--;
		}
		else{
			arr1[k]=arr1[i];
			i--;
		}
		k--;
	}
	while(j>=0){
		arr1[k]=arr2[j];
		j--;
		k--;
	}
    return arr1;
}
