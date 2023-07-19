//https://www.codingninjas.com/studio/problems/maximum-product-subarray_8230828?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h> 

int maximumProduct(vector<int> &arr, int n){
    int maxp=INT_MIN,prod=1;
    for(int i=0;i<n;i++){
        prod*=arr[i];
        maxp=max(maxp,prod);
        if(prod==0){
            prod=1;
        }
    }
    prod=1;
    for(int i=n-1;i>=0;i--){
        prod*=arr[i];
        maxp=max(maxp,prod);
        if(prod==0){
            prod=1;
        }
    }
    return maxp;

}

 
