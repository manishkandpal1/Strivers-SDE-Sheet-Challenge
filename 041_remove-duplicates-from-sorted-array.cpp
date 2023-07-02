//https://www.codingninjas.com/studio/problems/remove-duplicates-from-sorted-array_8230811?challengeSlug=striver-sde-challenge

int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	 int i=0;
	   for(int j=1;j<n;++j){
		    if(arr[i]!=arr[j]){
				 i++;
			  arr[i]=arr[j];
			}
	   }
	   return i+1;
}
