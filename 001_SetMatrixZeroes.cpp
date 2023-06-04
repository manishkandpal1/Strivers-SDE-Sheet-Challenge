//https://www.codingninjas.com/codestudio/problems/set-matrix-zeros_8230862?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	int m=matrix.size();
	int n=matrix[0].size();
	vector<int>r(m,0); //row
	vector<int>c(n,0); //col

	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(matrix[i][j]==0){ //if m[r][c] is 0 set the row index and col index as 1
				r[i]=1;
				c[j]=1;
			}
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(r[i]==1 || c[j]==1){ //if the row index or col index is 1 , set the respective row , col as 0
				matrix[i][j]=0;
			}
		}
	}
}
