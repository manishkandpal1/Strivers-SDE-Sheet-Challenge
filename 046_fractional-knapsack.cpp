//https://www.codingninjas.com/studio/problems/fractional-knapsack_8230767?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h> 
double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    sort(items.begin(), items.end(), [](pair<int, int> &a, pair<int, int> &b) {
        return ((double) a.second / a.first) > ((double) b.second / b.first);
    });

    double maxP = 0;
    int currWt = 0;
    for(auto p: items) {
        if(p.first + currWt <= w) {
            currWt += p.first;
            maxP += p.second;
        } else {
            maxP += double ((double) p.second * (w - currWt)) / p.first;
            break;
        }
    }
    return maxP;
}
