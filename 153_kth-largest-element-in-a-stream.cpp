//https://www.codingninjas.com/studio/problems/kth-largest-element-in-a-stream_8230728?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h> 
class Kthlargest {
public:
    priority_queue<int, vector<int>, greater<int>> pq;
    int K;
    Kthlargest(int k, vector<int> &arr) {
        K = k;
        for(auto &num : arr) {
            pq.push(num);
            if(pq.size() > K)
                pq.pop();
        }
    }

    void add(int num) {
        pq.push(num);
        if(pq.size() > K)
            pq.pop();
    }

    int getKthLargest() {
        return pq.top();
    }

};
