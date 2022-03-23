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
//     vector<int> inorderTraversal(TreeNode* root) {
//         vector<int>answer;
//         stack<TreeNode* > s;
        
//          if(root==NULL)
//             return answer;
//         addLeftSubtree(root,s);
       
        
//         while(!s.empty()){
//             TreeNode* currentNode = s.top();
//             s.pop();
//             answer.push_back(currentNode->val);
            
//             if(currentNode->right!=NULL){
//                 addLeftSubtree(currentNode->right,s);
//             }
//         }
//         return answer;
//     }
// private:
//     void addLeftSubtree(TreeNode* currentNode,stack<TreeNode*>&s){
//        s.push(currentNode);
//         while(currentNode->left!=nullptr){
            
//             s.push(currentNode->left);
//             currentNode= currentNode->left;
//         }
//     return ;
//     }
// };