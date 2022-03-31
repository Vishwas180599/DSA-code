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
//     TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
//         unordered_map<int,int> inorderMap;
//         inorderMap = populateMap(inorder);
//         int n = postorder.size()-1;
//         int postIndex[1]={n};
//         return constructTree(postorder,inorderMap,0,inorder.size()-1,postIndex);
        
//     }
// private:
//     TreeNode* constructTree(vector<int>&postorder,unordered_map<int,int>& inorderMap,int start,int end,int postIndex[1]){
//         if(start>end)
//             return NULL;
//         TreeNode* root= new TreeNode(postorder[postIndex[0]]);
//         int currentIndex =inorderMap[postorder[postIndex[0]]];
//         postIndex[0]-=1;
        
//         root->right = constructTree(postorder,inorderMap,currentIndex+1,end,postIndex);
        
//         root->left = constructTree(postorder,inorderMap,start,currentIndex-1,postIndex);
        
//         return root;
        
        
//     }
// private:
//     unordered_map<int,int> populateMap(vector<int>& inorder){
//         unordered_map<int,int> mp;
//         for(int i=0;i<inorder.size();i++){
//             mp[inorder[i]]=i;
//         }
//         return mp;
//     }
    
// };