/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int count=0;
    int res;
    void fun(TreeNode *root,int k){
        if(root){
        fun(root->left,k);
        count++;
        if(count==k){
            res=root->val;
            return;
        }
        fun(root->right,k);
        }
    }
    int kthSmallest(TreeNode* root, int k) {
        fun(root,k);
        return res;
    }
};