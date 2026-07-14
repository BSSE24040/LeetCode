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

    int findHeight(TreeNode*root){
        if(root==nullptr){
            return -1;
        }


int max=findHeight(root->left);
int rightHeight=findHeight(root->right);

if(max<rightHeight){
    max=rightHeight;
}
return max+1;


    }
    int maxDepth(TreeNode* root) {
        


        int height= findHeight(root);
        return height+1;
    }
};