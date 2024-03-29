//https://www.codingninjas.com/studio/problems/median-in-a-stream_8230765?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h>
vector<int> findMedian(vector<int> &arr, int n){
	if (n==0) return {arr[0]};
	if (n==1) return {arr[0],(arr[0]+arr[1])/2};
	vector<int>ans;
	ans.push_back(arr[0]);
	ans.push_back((arr[0]+arr[1])/2);
	priority_queue<int>maxhp;
	priority_queue<int,vector<int>,greater<int>>minhp;
	maxhp.push(min(arr[0],arr[1]));
	minhp.push(max(arr[0],arr[1]));
	int sz1=1;
	int sz2=1;
	
    for (int i=2;i<n;i++){
		if (arr[i]<minhp.top()) {
			maxhp.push(arr[i]);
			sz1++;
		}
		else{
			minhp.push(arr[i]);
			sz2++;
		}
		if (abs(sz1-sz2)>=2){
			if (sz1>sz2){
				sz1--;
				sz2++;
				minhp.push(maxhp.top());
				maxhp.pop();
			}
			else{
				sz2--;
				sz1++;
				maxhp.push(minhp.top());
				minhp.pop();
			}
		}
		if (sz1==sz2) ans.push_back((minhp.top()+maxhp.top())/2);
		else if (sz1>sz2) ans.push_back(maxhp.top());
		else ans.push_back(minhp.top());
	}
	return ans;
}
