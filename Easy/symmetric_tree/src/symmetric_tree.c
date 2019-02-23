
/*
Given a binary tree, check whether it is a mirror of itself (ie, symmetric around its center).

For example, this binary tree [1,2,2,3,4,4,3] is symmetric:

    1
   / \
  2   2
 / \ / \
3  4 4  3



But the following [1,2,2,null,3,null,3] is not:
  1
   / \
  2   2
   \   \
   3    3


*/


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool symmetric(struct TreeNode* root,struct TreeNode* tmp)
{

    if (root ==NULL && tmp==NULL)
        return true;
    if (root==NULL || tmp==NULL)
        return false;
    if((root->val == tmp->val) && symmetric(root->left,tmp->right) &&  symmetric(root->right,tmp->left))
    {
       return true;
    }
    else
    {
        return false;
    }

}



bool isSymmetric(struct TreeNode* root) {


    if(root ==NULL) return true;
    return (symmetric(root->left,root->right));

}
