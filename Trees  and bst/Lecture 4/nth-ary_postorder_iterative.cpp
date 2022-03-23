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
//         stack<Node*>s;
        
//         if(root==NULL)
//             return answer;
        
//         s.push(root);
        
//         while(!s.empty()){
//             Node* currentNode = s.top();
//             s.pop();
//             answer.push_back(currentNode->val);
//             vector<Node*>child=currentNode->children;
//             int n= child.size();
            
//             for(int i=0;i<n;i++){
//                 s.push(child[i]);
//             }
            
//         }
//         reverse(answer.begin(),answer.end());
//         return answer;
//     }
       
// };