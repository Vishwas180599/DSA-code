// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
        
//          unordered_set<ListNode*> s;
       
//         while(head!=NULL){
//         s.insert(head);
//         head=head->next;
            
//         if(s.find(head)!=s.end())
//             return head;
//         }
        
//         return NULL;
        
//     }
        
    
// };