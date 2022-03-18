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
//     ListNode* oddEvenList(ListNode* head) {
        
//         ListNode*oddDummy=new ListNode(-1);
//         ListNode* evenDummy=new ListNode(-1);
        
//         ListNode* curr1=oddDummy;
//         ListNode* curr2= evenDummy;
        
//         ListNode* current=head;
        
//         bool flag=true;
        
//         while(current!=NULL){
            
//             if(flag){
//                 ListNode* newNode= new ListNode(current->val);
//                 curr1->next =newNode;
//                 curr1=curr1->next;
//                 flag=false;
//             }
//             else{
//                 ListNode*newNode=new ListNode(current->val);
//                 curr2->next=newNode;
//                 curr2=curr2->next;
//                 flag=true;
//             }
//              current=current->next;
//         }
//         curr1->next=evenDummy->next;
//         return oddDummy->next;
        
//     }
// };