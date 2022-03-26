// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
//         vector<int> answer;
//         unordered_map<TreeNode*,TreeNode*> parentMap;
//         populateparentMap(root,nullptr,parentMap);
//         set<TreeNode*>s;
//         printKdistance(target,k,s,parentMap,answer);
//         return answer;
//     }
 
//     private:
//     void populateparentMap(TreeNode* currentNode,TreeNode* currentParent,unordered_map<TreeNode*,TreeNode*>&parentMap){
//     if(currentNode==NULL)
//         return ;
    
//     parentMap[currentNode]=currentParent;
//     populateparentMap(currentNode->left,currentNode,parentMap);
//      populateparentMap(currentNode->right,currentNode,parentMap);
//     return;
// }
//     private:
//     void printKdistance(TreeNode* currentNode,int k,set<TreeNode*>& s,unordered_map<TreeNode*,TreeNode*>&parentMap,vector<int>&answer){
//         if(currentNode==NULL ||s.find(currentNode)!=s.end()||k<0)
//             return;
//         if(k==0){
           
//             answer.push_back(currentNode->val);
//             return;
//         }
//          s.insert(currentNode);
        
//         printKdistance(currentNode->left,k-1,s,parentMap,answer);
//         printKdistance(currentNode->right,k-1,s,parentMap,answer);
//         printKdistance(parentMap[currentNode],k-1,s,parentMap,answer);
//         return;
//     }
// };