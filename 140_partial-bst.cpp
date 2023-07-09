//https://www.codingninjas.com/studio/problems/partial-bst_8230723?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h> 
/*************************************************************
 
    Following is the Binary Tree node structure

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
bool valid(BinaryTreeNode<int> *root, long long minVal, long long maxVal) {
    if(!root)
        return true;

    if(root->data < minVal or root->data > maxVal)
        return false;
    
    return valid(root->left, minVal, root->data) and valid(root->right, root->data, maxVal);
}

bool validateBST(BinaryTreeNode<int> *root) {
    return valid(root, LONG_MIN, LONG_MAX);
}
