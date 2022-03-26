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
//     TreeNode* invertTree(TreeNode* root) {
//         if(root==NULL)
//             return root;
//         TreeNode*rightSubtree=invertTree(root->left);
//         TreeNode* leftSubtree = invertTree(root->right);
        
//         root->right= rightSubtree;
//         root->left = leftSubtree;
        
//         return root;
//     }
// };