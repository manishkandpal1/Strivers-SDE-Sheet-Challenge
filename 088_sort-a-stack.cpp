//https://www.codingninjas.com/studio/problems/sort-a-stack_8230787?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h> 
priority_queue<int,vector<int>,greater<int>>pq;

void sortStack(stack<int> &stack){
    if(stack.empty()) return;
    int val =  stack.top();
    pq.push(val);
    stack.pop();
    sortStack(stack);
    if(!pq.empty())
    stack.push(pq.top());
    pq.pop();
}

