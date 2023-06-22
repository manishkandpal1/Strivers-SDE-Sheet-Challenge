//https://www.codingninjas.com/studio/problems/longest-substring-without-repeating-characters_8230684?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    vector<int> dict(256, -1);
        int maxLen = 0, start = -1;
        for (int i = 0; i != input.length(); i++) {
            if (dict[input[i]] > start)
                start = dict[input[i]];
            dict[input[i]] = i;
            maxLen = max(maxLen, i - start);
        }
        return maxLen;
}
