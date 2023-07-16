//https://www.codingninjas.com/studio/problems/floor-in-bst_8230753?challengeSlug=striver-sde-challenge


#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

void helper(TreeNode<int> * root, int X,int &ans){

    if(root==NULL){
        return;
    }

    if(root->val==X){
        ans=root->val;
        return;
    }

    if(root->val<X){
        ans=max(ans,root->val);
        helper(root->right,X,ans);
    }else if(root->val>X){
        helper(root->left,X,ans);
    }

}

int floorInBST(TreeNode<int> * root, int X){
    int ans=0;
    helper(root,X,ans);
    return ans;
}

