//https://www.codingninjas.com/studio/problems/kth-smallest-node-in-bst_8230751?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

void findKthSmall(TreeNode<int>*root, int &ans,int &k){
  if(!root || k <= 0) return;
  findKthSmall(root->left, ans, k); //reverse in-order
  k--;
  if(k == 0){
      ans = root->data;
      return;
  }
  findKthSmall(root->right, ans, k);
}

int kthSmallest(TreeNode<int> *root, int k){
    int ans = -1;
    findKthSmall(root, ans, k);
    return ans;
}
