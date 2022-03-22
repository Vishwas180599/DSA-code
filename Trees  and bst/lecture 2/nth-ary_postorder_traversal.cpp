// /*
// // Definition for a Node.
// class Node {
// public:
//     int val;
//     vector<Node*> children;

//     Node() {}

//     Node(int _val) {
//         val = _val;
//     }

//     Node(int _val, vector<Node*> _children) {
//         val = _val;
//         children = _children;
//     }
// };
// */

// class Solution {
// public:
//     vector<int> postorder(Node* root) {
//         vector<int>answer;
//         postorderTraversal(root,answer);
//         return answer;
//     }
// private:    
//     void postorderTraversal(Node* root,vector<int>&answer){
//         if(root==NULL)
//             return;
        
//         for(auto child: root->children){
//             postorderTraversal(child,answer);
//         }
//         answer.push_back(root->val);
//         return;
//     }
    
// };