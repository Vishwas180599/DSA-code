// // /**
// //  * Definition for a binary tree node.
// //  * struct TreeNode {
// //  *     int val;
// //  *     TreeNode *left;
// //  *     TreeNode *right;
// //  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
// //  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
// //  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// //  * };
// //  */
// // class Solution {
// // public:
// //     bool isCousins(TreeNode* root, int x, int y) {
// //         int levels[2]={-1,-1};
// //         int parents[2]={-1,-1};
        
// //         findNode(root,x,y,levels,parents,0,new TreeNode(-1));
        
// //         if(levels[0]==levels[1]&&parents[0]!=parents[1])
// //             return true;
        
// //         return false;
// //     }
// // private:
// //     void findNode(TreeNode* root,int x,int y,int levels[2],int parents[2],int currentLevel,TreeNode* currentParent){
// //         if(root==NULL)
// //             return;
        
// //         if(root->val==x){
// //             levels[0]=currentLevel;
// //             parents[0]=currentParent->val;
// //         }
// //         if(root->val==y){
// //             levels[1]=currentLevel;
// //             parents[1]=currentParent->val;
// //         }
// //         findNode(root->left,x,y,levels,parents,currentLevel+1,root);
// //         findNode(root->right,x,y,levels,parents,currentLevel+1,root);
        
// //         return;
// //     }
// // };
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
// private:
//     void findNode(TreeNode* root,int x,int y,int levels[2],TreeNode* parents[2],int currentLevel,TreeNode* currentParent){
//         if(root==NULL)
//             return;
        
//         if(root->val==x){
//             levels[0]=currentLevel;
//             parents[0]=currentParent;
//         }
//         if(root->val==y){
//             levels[1]=currentLevel;
//             parents[1]=currentParent;
//         }
//         findNode(root->left,x,y,levels,parents,currentLevel+1,root);
//         findNode(root->right,x,y,levels,parents,currentLevel+1,root);
        
//         return;
//     }
// public:
//     bool isCousins(TreeNode* root, int x, int y) {
//         int levels[2]={-1,-1};
//         TreeNode* parents[2]={NULL,NULL};
        
//         findNode(root,x,y,levels,parents,0,NULL);
        
//         if(levels[0]==levels[1]&&parents[0]!=parents[1])
//             return true;
        
//         return false;
//     }

// };