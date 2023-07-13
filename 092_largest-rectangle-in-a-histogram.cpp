//https://www.codingninjas.com/studio/problems/largest-rectangle-in-a-histogram_8230792?challengeSlug=striver-sde-challenge

#include<bits/stdc++.h>
 int largestRectangle(vector < int > & heights) {
   int n=heights.size();
   stack<int> s;
   int leftsmaller[n],rightsmaller[n];
   for(int i=0;i<n;i++){
     while(!s.empty() && heights[s.top()]>=heights[i]){
       s.pop();
     }
     if(s.empty()) leftsmaller[i]=0;
     else leftsmaller[i]=s.top()+1;
     s.push(i);
   }
   while(!s.empty()) s.pop();

   for (int i = n - 1; i >= 0; i--) {
     while (!s.empty() && heights[s.top()] >= heights[i])
       s.pop();
     if (s.empty())
       rightsmaller[i] = n-1;
     else
       rightsmaller[i] = s.top() - 1;
     s.push(i);
   }
   int maxarea=0;
   for(int i=0;i<n;i++){
     maxarea=max(maxarea,heights[i]*(rightsmaller[i]-leftsmaller[i]+1));
   }
   return maxarea;
 }
