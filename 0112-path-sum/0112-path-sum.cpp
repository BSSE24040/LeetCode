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

bool flag=false;


int sum=0;


void getSum(TreeNode*root,int target){
if(root==nullptr){
    return;
}
sum+=root->val;
if(root->left==nullptr&&root->right==nullptr){
    
    if(sum==target){
        flag=true;
    }
  
}


     
 getSum(root->left,target);
 getSum(root->right,target);

 sum-=root->val;

}





bool hasPathSum(TreeNode* root, int targetSum) {
      
        if(root==nullptr){
 return false;
}

                 getSum(root,targetSum);

                return flag;
        
    }
};