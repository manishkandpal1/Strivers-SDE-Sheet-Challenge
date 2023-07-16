//https://www.codingninjas.com/studio/problems/lca-of-two-nodes-in-a-bst_8230778?challengeSlug=striver-sde-challenge

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
TreeNode<int>* LCAinaBST(TreeNode<int>* root, TreeNode<int>* p, TreeNode<int>* q){
    while(root){
        if(root->data>p->data && root->data>q->data){
            root=root->left;
        }
        else if(root->data<p->data && root->data<q->data){
            root=root->right;
        }
        else return root;
    }
}
