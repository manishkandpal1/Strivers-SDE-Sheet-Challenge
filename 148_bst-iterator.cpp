//https://www.codingninjas.com/studio/problems/bst-iterator_8230815?challengeSlug=striver-sde-challenge

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

class BSTiterator{
    public: 
    stack<int> st;
    void inorder(TreeNode<int>* root){
        if(root==NULL)
        return;
        inorder(root->right);
        st.push(root->data);
        inorder(root->left);
        return;
    }

    BSTiterator(TreeNode<int> *root){
        inorder(root);
    }

    int next(){
        if(st.empty())
        return -1;
        else{
            int z=st.top();
            st.pop();
            return z;
        } 

    }

    bool hasNext(){
        if(st.empty())
        return false;
        else
        return true;
    }
};


/*
    Your BSTIterator object will be instantiated and called as such:
    BSTIterator iterator(root);
    while(iterator.hasNext())
    {
       print(iterator.next());
    }
*/
