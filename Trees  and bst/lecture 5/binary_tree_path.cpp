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
//     vector<string> binaryTreePaths(TreeNode* root) {
//         vector<string> answer;
         
//         rootToLeaf(root,"",answer);
//         return answer;
//     }
// private:
//     void rootToLeaf(TreeNode* root,string currentpath,vector<string>&answer){
//         if(root==NULL)
//             return;
        
//         if(root->left==NULL&& root->right==NULL){
        
//             currentpath+=to_string(root->val);
//             answer.push_back(currentpath);
//             return;
//         }
//         currentpath+=to_string(root->val)+"->";
//         rootToLeaf(root->left,currentpath,answer);
//         rootToLeaf(root->right,currentpath,answer);
//         return;
//     }
// };