// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     bool isValidBST(TreeNode* root) {
//         long prevVal[1] = {-99999999999};
//         return isBST(root,prevVal);
//     }
// private:
//     bool isBST(TreeNode* root,long prevVal[1]){
//         if(root==NULL)
//             return true;
        
//         bool leftAns=isBST(root->left,prevVal);
        
//         if(root->val<=prevVal[0])
//             return false;
        
//         prevVal[0] = root->val;
//         bool rightAns=isBST(root->right,prevVal);
        
//         return leftAns&&rightAns;
        
        
//     }
// };