//https://www.codingninjas.com/studio/problems/construct-bst-from-preorder-traversal_8230850?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

    template <typename T>

    class TreeNode{
    public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
        ~TreeNode() {
            if (left){
                delete left;
            }
            if (right){
                delete right;
            }
        }
    };

*************************************************************/
TreeNode<int>* bst(vector<int> &ans,int s,int e){
    if(s>e){
        return NULL;
    }

    int mid=s+(e-s)/2;
    TreeNode<int>* root=new TreeNode<int>(ans[mid]);
    root->left=bst(ans,s,mid-1);
    root->right=bst(ans,mid+1,e);
    return root;

}

TreeNode<int>* preOrderTree(vector<int> &preOrder){
    sort(preOrder.begin(),preOrder.end());
    return bst(preOrder,0,preOrder.size()-1);
}
