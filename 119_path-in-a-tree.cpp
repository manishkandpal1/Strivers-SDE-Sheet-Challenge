//https://www.codingninjas.com/studio/problems/path-in-a-tree_8230860?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h> 
/*   
    template <typename T = int>
	class TreeNode
	{
		public:
		T data;
		TreeNode<T> *left;
		TreeNode<T> *right;

		TreeNode(T data)
		{
			this->data = data;
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
*/

bool solve(vector<int>&arr,TreeNode<int> *root,int x){
    if(!root)
        return false;
    arr.push_back(root->data);
    
    if(root->data ==x)
        return true;
    
    if(solve(arr,root->left,x) || solve(arr,root->right,x) )
        return true;
    
    arr.pop_back();
    return false;
}

vector<int> pathInATree(TreeNode<int> *root, int x){
    vector<int>arr;
    if(root==NULL){
        return arr;
    }
    solve(arr,root,x);
    return arr;
}
