class Solution {
public:
TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {

    if(root1==NULL && root2==NULL)
        return NULL;

    if(root1==NULL)
        return root2;
    if(root2==NULL)
        return root1;
    
    TreeNode* newNode = new TreeNode(root1->val + root2->val);
    TreeNode* left1 =  mergeTrees( root1->left, root2->left);
    TreeNode* right1 =  mergeTrees( root1->right, root2->right);
    
    newNode->left=left1;
    newNode->right=right1;

    return newNode;
}
};