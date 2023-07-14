//https://www.codingninjas.com/studio/problems/number-of-distinct-substring_8230842?challengeSlug=striver-sde-challenge

#include<bits/stdc++.h>
int distinctSubstring(string &word) {
    unordered_map<string,int> mp;

    for(int i = 0; i < word.length(); i++){
        for(int j = i; j < word.length(); j++){
            mp[word.substr(i,j-i+1)]++;
        }
    }

    return mp.size();
}
