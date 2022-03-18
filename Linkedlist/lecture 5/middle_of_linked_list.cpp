// // /**
// //  * Definition for singly-linked list.
// //  * struct ListNode {
// //  *     int val;
// //  *     ListNode *next;
// //  *     ListNode() : val(0), next(nullptr) {}
// //  *     ListNode(int x) : val(x), next(nullptr) {}
// //  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
// //  * };
// //  */
// // class Solution {
// // public:
// //     ListNode* middleNode(ListNode* head) {
        
// //         if(head==NULL)
// //             return NULL;
        
// //         ListNode* fastPtr= head;
// //         ListNode* slowPtr = head;
        
// //         while(fastPtr->next && fastPtr->next->next){
// //             fastPtr = fastPtr->next->next;
// //             slowPtr = slowPtr->next;
// //         }
// //         if(fastPtr->next)
// //             return slowPtr->next;
        
// //         else
// //             return slowPtr;
// //     }
// // };

// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
        
//         if(head==NULL)
//             return NULL;
        
//         ListNode* fastPtr= head;
//         ListNode* slowPtr = head;
        
//         while(fastPtr->next!=NULL && fastPtr->next->next!=NULL){
//             fastPtr = fastPtr->next->next;
//             slowPtr = slowPtr->next;
//         }
//         if(fastPtr->next!=NULL)
//             return slowPtr->next;
        
//         else
//             return slowPtr;
//     }
// };