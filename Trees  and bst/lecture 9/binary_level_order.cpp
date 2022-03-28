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
//     vector<vector<int>> levelOrder(TreeNode* root) {
//         vector<vector<int>>answer;       
//         queue<TreeNode*> q;
//         if(root==NULL)    
//             return answer;
//         q.push(root);
//         while(!q.empty()){
//             vector<int> level;
//             int currentSize =q.size();
//             while(currentSize>0){
//                 TreeNode* currentNode = q.front();
//                 q.pop();
//                 level.push_back(currentNode->val);
//                 currentSize--;
                
//                 if(currentNode->left!=NULL)
//                     q.push(currentNode->left);
            
//                 if(currentNode->right!=NULL)
//                     q.push(currentNode->right);
            
          
//             }
//               answer.push_back(level);
                        
//         }
//         return answer;
    
//     }
// };