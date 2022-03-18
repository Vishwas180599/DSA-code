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
//     ListNode* swapPairs(ListNode* head) {
        
//         return pairSwap(head);
               
//     }
// public:
//     ListNode* pairSwap(ListNode* head){
//         if(head==NULL||head->next==NULL)
//             return head;
        
//         ListNode* firstNode=head;
//         ListNode* secondNode=head->next;
//         ListNode * temp=head;
        
//         temp= pairSwap(head->next->next);
        
//         firstNode->next=temp;
//         secondNode->next=firstNode;
        
//         return secondNode;
        
//     }
// };