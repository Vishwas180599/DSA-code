// //iterative

// // /**
// //  * Definition for a binary tree node.
// //  * struct TreeNode {
// //  *     int val;
// //  *     TreeNode *left;
// //  *     TreeNode *right;
// //  *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// //  * };
// //  */

// // class Solution {
// // public:
// //     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
// //         TreeNode* currentNode = root;
        
// //         while(currentNode!=NULL){
// //             if(currentNode->val>p->val&&currentNode->val > q->val){
// //                 currentNode = currentNode->left;
// //             }
// //             else if(currentNode->val<p->val&&currentNode->val < q->val){
// //                 currentNode = currentNode->right;
// //             }
// //             else
// //                 return currentNode;
// //         }
// //         return NULL;
// //     }
// // };

// //recursive
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
//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
//         if(root==NULL)
//             return NULL;
        
//         if(root->val>p->val&&root->val > q->val)
//             return lowestCommonAncestor(root->left,p,q);
        
//         else  if(root->val<p->val&&root->val < q->val)
//             return lowestCommonAncestor(root->right,p,q);
        
//         else
//             return root;
        
        

//     }
// };