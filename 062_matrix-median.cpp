//https://www.codingninjas.com/studio/problems/matrix-median_8230735?challengeSlug=striver-sde-challenge

int Count(vector<int>v,int mid){
    int l=0, h=v.size()-1;
    while(l<=h){
        int m=(l+h)>>1;
        if(v[m]<=mid){
            l=m+1;
        }
        else{
            h=m-1;
        }
    }
    return l;
}

int getMedian(vector<vector<int>> &matrix){
    int low=1,high=1e9;

    int n=matrix.size(),m=matrix[0].size();

    while(low<=high){
        int mid=(low+high)>>1;
        int cnt=0;
         for(int i=0;i<n;i++){
             cnt+=Count(matrix[i],mid);
         }
         if (cnt<=(n*m)/2) low=mid+1;
         else   high=mid-1;
    }

    return low;
}
