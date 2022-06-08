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
    
//      void solve(TreeNode* root , int k , long long currentSum , map<int,int> &mp , int &ans)
//     {
//         if(root == NULL) return ;
//         currentSum += root->val;
//         ans += mp[currentSum-k];
//         mp[currentSum]+=1;
//         solve(root->left, k , currentSum , mp , ans);
//         solve(root->right, k , currentSum , mp , ans);
//         mp[currentSum]-=1;
        
        
//     }
//     int pathSum(TreeNode* root, int targetSum) {
//         map<int ,int> mp;
//         mp[0] = 1;
//         long long sum = 0 ;
//         int ans= 0;
//         solve(root , targetSum ,sum ,mp , ans );
//         return ans ;
//     }
// };
