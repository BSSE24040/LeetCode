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


int height(TreeNode*root){
    if(root==nullptr){
        return 0;
    }

    int leftHeight=height(root->left);
    int rightHeight=height(root->right);

    return 1+max(leftHeight,rightHeight);
}


bool  check(TreeNode*l){

if(l==nullptr){
    return true;
}

    int left=height(l->left);
    int right=height(l->right);

    if(abs(left-right)>1){
        return false;
    }

    return check(l->left)&&check(l->right);

}

    bool isBalanced(TreeNode* root) {
        if(root==nullptr){
            return true;
        }


        return check(root);
       
    }
};