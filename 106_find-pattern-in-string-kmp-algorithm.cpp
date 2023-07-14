//https://www.codingninjas.com/studio/problems/find-pattern-in-string-kmp-algorithm_8230819?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h> 
void lps(string p, vector<int>& temp){
    temp[0] = 0; 
    int i = 0; 
    int j = 1; 
    while (j < temp.size()){
        if (p[i] == p[j]) {
            i++;
            temp[j] = i; 
            j++;
        }
        else
        {
            if (i != 0)
                i = temp[i - 1]; 
            else
            {
                temp[j] = 0; 
                j++;
            }
        }
    }
}


bool findPattern(string p, string s){
    int n = p.size(); 
    int m = s.size(); 

    vector<int> temp(n);
    lps(p, temp); 

    int i = 0; 
    int j = 0; 

    while (j < m)    {
        if (s[j] == p[i]) {
            i++;
            j++;
        }

        if (i == n) 
            return true;
        else if (j < m && s[j] != p[i]) 
        {
            if (i != 0)
                i = temp[i - 1]; 
            else
                j++;
        }
    }

    return false; 
}
