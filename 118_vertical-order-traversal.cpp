//https://www.codingninjas.com/studio/problems/vertical-order-traversal_8230758?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h> 
/************************************************************

Following is the Binary Tree node class
    
template <typename T = int>
class TreeNode
{
public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T val)
    {
        this->data = val;
        left = NULL;
        right = NULL;
    }

    ~TreeNode()
    {
        if (left != NULL)
        {
            delete left;
        }
        if (right != NULL)
        {
            delete right;
        }
    }
};

************************************************************/

class Node{
    public:
    TreeNode<int>* node;
    int X;
    int Y;
    Node(TreeNode<int>* _node , int _x,int _y){
        node = _node;
        X = _x;
        Y = _y;
    }
};
vector<int> verticalOrderTraversal(TreeNode<int> *root)
{
    // node,x,y;
    queue<Node> q;
    vector<int> ans;
    map<int,vector<int>> travesal;
    Node n(root,0,0);
    q.push(n);
    while(!q.empty()){
        Node curr = q.front();
        q.pop();
        TreeNode<int>* temp = curr.node;
        int x = curr.X;
        int y = curr.Y; 
        travesal[x].push_back(temp->data);
        if(temp->left != NULL){
            Node tempL = Node(temp->left,x-1,y+1);
            q.push(tempL);
        }
        if(temp->right != NULL){
            Node tempR = Node(temp->right,x+1,y+1);
            q.push(tempR);
        }
    }

    for(auto it : travesal){
        for(auto i : it.second){
            ans.push_back(i);
        }
    }

    return ans;
}
