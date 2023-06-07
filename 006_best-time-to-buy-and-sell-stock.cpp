//https://www.codingninjas.com/codestudio/problems/best-time-to-buy-and-sell-stock_8230746?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int mxprofit=0;
    int mini=prices[0];
    for(int i=0;i<prices.size();i++){
        mini=min(prices[i],mini);
        int profit=prices[i]-mini;
        mxprofit=max(mxprofit,profit);
    }
    return mxprofit;
}
