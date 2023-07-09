//https://www.codingninjas.com/studio/problems/maximum-consecutive-ones_8230736?challengeSlug=striver-sde-challenge

int longestSubSeg(vector<int> &arr , int n, int k){
    int lw = 0, rw = 0;
    int currZ = 0;
    int currW = 0, maxW = 0;

    while(rw < n){
        if(arr[rw] == 0){
            currZ++;
            if(currZ >k){
                while(currZ >k){
                    if(arr[lw] == 0)
                        currZ--;
                    lw++; currW--;
                }
            }
        }
        currW++; rw++;
        if(currW > maxW)
            maxW = currW;
    }  
    return maxW;
}
