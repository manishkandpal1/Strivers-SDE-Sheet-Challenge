//https://www.codingninjas.com/studio/problems/kth-element-of-two-sorted-arrays_8230824?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h>
using namespace std;

int answer(vector<int>&a,int n,int key){
        int l = 0;
        int h = n-1;

        while(l<=h){
            int mid = l+(h-l)/2;
            if(a[mid]<=key){
                l = mid+1;
            }
            else{
                h = mid-1;
            }
        }
        return l;
    }

int ninjaAndLadoos(vector<int> &row1, vector<int> &row2, int m, int n, int k) {
     int low = min(row1[0],row2[0]);
    int high = max(row1[m-1],row2[n-1]);
        while(low<=high){
            int mid = low+(high-low)/2;
            int cnt1 = answer(row1,m,mid);
            int cnt2 = answer(row2,n,mid);
            if((cnt1+cnt2)<k){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return low;
}
