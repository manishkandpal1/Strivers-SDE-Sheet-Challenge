//https://www.codingninjas.com/studio/problems/tree-traversals_8230775?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure:

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


************************************************************/

vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root){    
    vector<vector<int>> tree;
    vector<int>pre,ino,post;
    if(root==NULL)return tree;
    stack<pair<BinaryTreeNode<int>*,int>>s;
    s.push({root,1});
    while(!s.empty()){
        auto it=s.top();
        s.pop();
        if(it.second==1){
            pre.push_back(it.first->data);
            it.second++;
            s.push(it);
            if(it.first->left!=NULL)s.push({it.first->left,1});
        }

        else if(it.second==2){
            ino.push_back(it.first->data);
            it.second++;
            s.push(it);
            if(it.first->right!=NULL)s.push({it.first->right,1});
        }

        else{
            post.push_back(it.first->data);
        }
    }

    tree.push_back(ino);
    tree.push_back(pre);
    tree.push_back(post);

   return tree;

}
