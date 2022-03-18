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
//     ListNode* reverseKGroup(ListNode* head, int k) {
//        return reverseLinkedListInKGroup(head,k);
        
//     }
// public:
//     ListNode* reverseLinkedListInKGroup(ListNode* head,int k){
//         if(head==NULL)
//             return head;
        
//         ListNode* curr = head;
//         int currLength=1;
        
//         while(curr->next!=NULL&& currLength<k){
//             curr=curr->next;
//             currLength+=1;
//         }
//         if(currLength<k){
//             return head;
//         }
//         ListNode* tempNode = curr->next;
//         curr->next=NULL;
        
//         ListNode* prev=NULL;
//          curr= head;
//         while(curr!=NULL){
//             ListNode* temp=curr->next;
//             curr->next=prev;
//             prev=curr;
//             curr=temp;
//         }
        
//         ListNode*tempList= reverseLinkedListInKGroup(tempNode,k);
//         head->next= tempList;
//         return prev;
        
//     }
// };