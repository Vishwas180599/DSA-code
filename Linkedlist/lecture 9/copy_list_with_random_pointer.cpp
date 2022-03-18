// /*
// // Definition for a Node.
// class Node {
// public:
//     int val;
//     Node* next;
//     Node* random;
    
//     Node(int _val) {
//         val = _val;
//         next = NULL;
//         random = NULL;
//     }
// };
// */

// class Solution {
// public:
//     Node* copyRandomList(Node* head) {
//        Node* dummyNode= new Node(-1);
//        Node* runner =dummyNode;
        
//        Node* curr=head;
//        unordered_map<Node*,Node*> mp;
        
//         while(curr!=NULL){
//             Node* newNode= new Node(curr->val);
//             runner->next=newNode;
//             mp[curr]=newNode;
//             curr=curr->next;
//             runner=runner->next;
//         }
//         curr=head;
//         runner=dummyNode->next;
        
//         while(curr!=NULL){
//             if(curr->random!=NULL)
//                 mp[curr]->random=mp[curr->random];
            
            
//             runner=runner->next;   
//             curr=curr->next;
           
//         }
        
//          return dummyNode->next;
//     }
// };