//https://www.codingninjas.com/codestudio/problems/maximum-subarray-sum_8230694?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long maxsum=INT_MIN,currentsum=0;
    for(int i=0;i<n;i++){
        currentsum+=arr[i];
        if(currentsum<0) currentsum=0;
        maxsum=max(maxsum,currentsum);
    }
    return maxsum;
}
 
