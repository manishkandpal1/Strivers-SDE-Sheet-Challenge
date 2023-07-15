//https://www.codingninjas.com/studio/problems/bottom-view-of-binary-tree_8230745?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h> 
/*************************************************************
 
    Following is the Binary Tree node structure.

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/

vector<int> bottomView(BinaryTreeNode<int> * root){
    vector<int>ans;
    map<int,int>mp;
    if(!root) return ans;
    queue<pair<BinaryTreeNode<int>*,int>>q;
    q.push({root,0});
    while(!q.empty()){
        BinaryTreeNode<int>*temp=q.front().first;
        int c=q.front().second;
        q.pop();
        mp[c]=temp->data;
        if(temp->left) q.push({temp->left,c-1});
        if(temp->right) q.push({temp->right,c+1});
    }
    for(auto e:mp){
        ans.push_back(e.second);
    }
    return ans;
}
