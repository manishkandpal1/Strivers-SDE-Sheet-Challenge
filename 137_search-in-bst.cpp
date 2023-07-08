//https://www.codingninjas.com/studio/problems/search-in-bst_8230841?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h> 
/*
    Following is the Binary Tree node structure:

    class BinaryTreeNode {
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
*/

bool searchInBST(BinaryTreeNode<int> *root, int x) {
     if(root==NULL){
            return NULL;
        }

        if(root->data==x){
            return root;
        }

        if(x<root->data){
            return searchInBST(root->left, x);
        }

        return searchInBST(root->right, x);
}

#include <bits/stdc++.h> 
/*
    Following is the Binary Tree node structure:

    class BinaryTreeNode {
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
*/

bool searchInBST(BinaryTreeNode<int> *root, int x) {
     if(root==NULL){
            return NULL;
        }

        if(root->data==x){
            return root;
        }

        if(x<root->data){
            return searchInBST(root->left, x);
        }

        return searchInBST(root->right, x);
}
