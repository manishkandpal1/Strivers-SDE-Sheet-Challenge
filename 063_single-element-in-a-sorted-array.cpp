//https://www.codingninjas.com/studio/problems/single-element-in-a-sorted-array_8230826?challengeSlug=striver-sde-challenge

int singleNonDuplicate(vector<int>& arr)
{
	// Write your code here
	int low=0;
    int high=arr.size()-2;
    while(low<=high){
        int mid=(high+low)/2;
        if(arr[mid]==arr[mid^1]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return arr[low];
}
