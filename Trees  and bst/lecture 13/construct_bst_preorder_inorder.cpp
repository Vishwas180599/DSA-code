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
//     TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
//         unordered_map<int,int> inorderMap;
//         inorderMap = populateMap(inorder);
//         int preIndex[1]={0};
//         return constructTree(preorder,inorderMap,0,inorder.size()-1,preIndex);
        
//     }
// private:
//     TreeNode* constructTree(vector<int>&preorder,unordered_map<int,int>& inorderMap,int start,int end,int preIndex[1]){
//         if(start>end)
//             return NULL;
//         TreeNode* root= new TreeNode(preorder[preIndex[0]]);
//         int currentIndex =inorderMap[preorder[preIndex[0]]];
//         preIndex[0]+=1;
        
//         root->left = constructTree(preorder,inorderMap,start,currentIndex-1,preIndex);
//         root->right = constructTree(preorder,inorderMap,currentIndex+1,end,preIndex);
        
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