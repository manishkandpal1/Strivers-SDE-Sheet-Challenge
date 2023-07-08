//https://www.codingninjas.com/studio/problems/next-smaller-element_8230814?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h>

vector<int> nextSmallerElement(vector<int> &arr, int n){
    vector<int> ans(n,-1);

    stack<int> st;
    st.push(0);

    for (int i=1;i<n;i++){
        while (!st.empty() && arr[i] < arr[st.top()]){
            ans[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }

    return ans;
}
