//https://www.codingninjas.com/codestudio/problems/next-permutation_8230741?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &a, int n)
{
    //  Write your code here.
     int k,l;
     for(k=n-2;k>=0;k--){ 
         if(a[k]<a[k+1]){
             break;
             }
      }    
        if( k < 0){
            reverse(a.begin(),a.end());
            } else{
            for(l = n - 1 ; l > k ; l--){
                if(a[k] < a[l]) {
                     break;
                     } 
                 } 
        swap(a[k] , a[l]);   
        reverse(a.begin()+k+1,a.end());
    }   
     return a;
}
