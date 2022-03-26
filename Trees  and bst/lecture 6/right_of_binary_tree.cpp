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
//     vector<int> rightSideView(TreeNode* root) {
//         vector<int> answer;
//         set<int> s;
//         rightSideView(root,1,s,answer);
//         return answer;
//     }
// private:
    
// void rightSideView(TreeNode* root ,int level,set<int>& s,vector<int>&answer){
//     if(root==NULL)
//     return;
    
//     if(s.find(level)==s.end()){
//         s.insert(level);
//         answer.push_back(root->val);
//     }
    
//     rightSideView(root->right,level+1,s,answer);
//     rightSideView(root->left,level+1,s,answer);
//     return;
// }

  
// };