// https://www.codingninjas.com/codestudio/problems/sort-0-1-2_8230695?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
   int zero=0,one=0,two=0;
   for(int i=0;i<n;i++){
      if(arr[i]==0){
         zero++;
      }
       if(arr[i]==1){
         one++;
      }
       if(arr[i]==2){
         two++;
      }
   }
   int i=0;
   while(zero--) {
      arr[i++]=0;
   }
    while(one--) {
      arr[i++]=1;
   }
    while(two--) {
      arr[i++]=2;
   }
}
