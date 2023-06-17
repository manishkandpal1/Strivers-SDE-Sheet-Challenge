//https://www.codingninjas.com/codestudio/problems/longest-consecutive-sequence_8230708?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    unordered_set<int> st(nums.begin(), nums.end());
    int longest = 0;

    for(int i=0; i<n; i++) {
        if(st.find(nums[i]-1) == st.end()){
            int length = 1;
            for(int j=1; st.find(nums[i]+j) != st.end(); j++, length++);
            longest = max(length, longest);
        }
    }

    return longest;

}
