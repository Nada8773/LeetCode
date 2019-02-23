/**

Given a binary tree, find its maximum depth.
The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.
Note: A leaf is a node with no children.


 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root)
{
    int count_l;
    int count_r;

    if(root==NULL) return NULL;

    count_l=maxDepth(root->left) ;
    count_r=maxDepth(root->right) ;

    if(count_l > count_r)
    {
        return (count_l+1);
    }
    else
    {
        return (count_r+1);
    }
}
