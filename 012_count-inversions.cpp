//https://www.codingninjas.com/codestudio/problems/count-inversions_8230680?challengeSlug=striver-sde-challenge

/*
long long getInversions(long long *arr, int n){
    long long count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                count++;
            }
        }
    }
    return count;
}
*/

#include <bits/stdc++.h> 

long long merge(long long *arr, int low, int mid, int high) {
    int left,right;
    left=low;
    right=mid+1;

    long long count = 0;
    vector<long long> temp;
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
            count += (mid - left + 1); 
        }

    }

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
    return count;
}
long long merges(long long *arr, int low, int high) {
    long long count = 0;
    if (low < high) {
        int mid = (low + high) / 2;
        count += merges(arr, low, mid);
        count += merges(arr, mid + 1, high);
        count += merge(arr, low, mid, high);
    }
    return count;
}
long long mergesort(long long *arr, int n) {
    return merges(arr, 0, n - 1);
}

 

long long getInversions(long long *arr, int n) {
    return mergesort(arr, n);
}
