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
//     TreeNode* increasingBST(TreeNode* root) {
//         vector<int> traversal ;
//         inorderTraversal(root,traversal);
//         TreeNode* dummyNode = new TreeNode(-1);
//         TreeNode *newNode=dummyNode;
//         for(auto it:traversal){
//             dummyNode->right=new TreeNode(it);
//             dummyNode=dummyNode->right;
//         }
//         return newNode->right;
//     }
//     void inorderTraversal(TreeNode* root,vector<int>&traversal){
//         if(root==NULL)
//             return ;
        
//         inorderTraversal(root->left,traversal);
//         traversal.push_back(root->val);
//         inorderTraversal(root->right,traversal);
//         return;
        
//     }
// };