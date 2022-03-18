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
// //     ListNode* removeNthFromEnd(ListNode* head, int n) {
        
// //         if(head==NULL) 
// //             return NULL;
// //         if(head->next==NULL && n==1)
// //             return NULL; 
// //        ListNode* cur = head;
// //         ListNode* len = head;
// //         auto count = 0;
// //         while(cur->next != NULL){
// //             count++;
// //             cur = cur->next;
// //         }
        
// //         if(count==n-1){
// //             head = head->next;
// //             return head;
// //         }
// //         for(int i=1;i<count-n+1;i++){
// //             len = len->next;
// //         }
// //         len->next = len->next->next;
// //         return head;
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
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
        
//         if(head==NULL) 
//             return NULL;
//         if(head->next==NULL && n==1)
//             return NULL; 
//         auto curr = head;
//         curr = reverseList(curr);
        
//        ListNode* temp=curr;
//         if(n==1)
//         {
//             curr=temp->next;   
//         }
//         else
//         {
//             for(int i=0;i<n-2;i++)
//             {
//                 temp=temp->next;
//             }
            
//             temp->next=temp->next->next;
//     }
//         return reverseList(curr);
//     }
    
// public:
//     ListNode* reverseList(ListNode* head) {
        
//         ListNode* prev  = NULL;
//         ListNode* current  = head;
//         ListNode* tempNode = NULL;
       
        
//         while(current!= NULL)
//         { 
//             tempNode = current->next;
//             current->next = prev;
//             prev = current;
//             current = tempNode;
            
            
//         }
        
//         return prev;
        
//     }
    
        
    
// };
