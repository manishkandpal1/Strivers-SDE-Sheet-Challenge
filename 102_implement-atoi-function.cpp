//https://www.codingninjas.com/studio/problems/implement-atoi-function_8230776?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h> 

int atoi(string str) {
    bool sign = false;
    int start = 0;
    if(str[0] == '-'){
        sign = true;
        start = 1;
    }

    int ans=0;
    int n = str.length();
    for(int i = start ; i<n ; i++){
        if(str[i] >= '0' && str[i] <= '9'){
            ans = ans * 10 + (str[i] - '0');
        }
    }

    if(sign == true ){
        return -ans ;
    }else{
        return ans ;
    }

}
