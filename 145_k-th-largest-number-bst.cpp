//https://www.codingninjas.com/studio/problems/k-th-largest-number-bst_8230750?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h> 
/************************************************************
    Following is the Binary Search Tree node structure
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/

void reverseinorder(TreeNode<int>*root,vector<int> &ans){
    if (root==NULL)
    return ;
    reverseinorder(root->right,ans);
    ans.push_back(root->data);
    reverseinorder(root->left,ans);
}

int KthLargestNumber(TreeNode<int>* root, int k) {
    vector<int>ans;
    reverseinorder(root,ans);
    if(k>ans.size()) return -1;

    return ans[k-1];
}
