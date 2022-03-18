// // /**
// //  * Definition for singly-linked list.
// //  * struct ListNode {
// //  *     int val;
// //  *     ListNode *next;
// //  *     ListNode(int x) : val(x), next(NULL) {}
// //  * };
// //  */
// // class Solution {
// // public:
// //     bool hasCycle(ListNode *head) {
// //       unordered_set<ListNode*> s;
       
// //         while(head!=NULL){
// //         s.insert(head);
// //         head=head->next;
            
// //         if(s.find(head)!=s.end())
// //             return true;
// //         }
        
// //         return false;
        
// //     }
// // };

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
//     bool hasCycle(ListNode *head) {
        
//         if(head==NULL || head->next==NULL)
//             return false;
        
//         ListNode* fastPtr=head;
//         ListNode* slowPtr = head;
        
//         while(fastPtr->next!=NULL &&fastPtr->next->next!=NULL){
//             fastPtr= fastPtr->next->next;
//             slowPtr= slowPtr->next;
            
//             if(fastPtr==slowPtr){
//                 return true;
//             }
//         }
//         return false;
        
//     }
// };