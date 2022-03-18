// class Node{
//     public:
//     int val;
//     Node* prev;
//     Node* next;
//     Node(int val){
//         this->val=val;
//         prev=nullptr;
//         next=nullptr;
//     }
// };
// class MyLinkedList {
 
// public:
//    Node* head;
//     Node* tail;
//     MyLinkedList() {
//         head=nullptr;
//         tail=nullptr;
//     }
     
    
    
//     int get(int index) {
//         if(head == NULL)
//             return -1;
//         Node* temp = head;
//         int count = 0;
//         while(temp!=NULL )
//         {
//             temp=temp->next;
//             count++;
//         }
//         if(index>=count)
//             return -1;
//         temp = head;
//         while(temp!=NULL and index>0)
//         {
//             temp=temp->next;
//             index--;
//         }
//         return temp->val;
            
//     }
    
//     void addAtHead(int val) {
//         Node *newnode = new Node(val);
//         if(head == NULL)
//         {
//             head = newnode;
//             tail = newnode;
//         }
            
//         else
//         {
//             newnode->next = head;
//             head->prev = newnode;
//             head=newnode;
//         }
        
//     }
    
//     void addAtTail(int val) {
//         Node *temp = head;
//         if(head == NULL)
//         {
//             Node *newnode = new Node(val);
//             head = newnode;
//             tail = newnode;
//             return;
//         }
//         while(temp->next!=NULL)
//         {
//             temp=temp->next;
//         }
//         Node *newnode = new Node(val);
//         temp->next = newnode;
//         newnode->prev = temp;
//         tail = newnode;
        
//     }
    
//     void addAtIndex(int index, int val) {
//         Node* temp = head;
//         int count = 0;
//         while(temp!=NULL )
//         {
//             temp=temp->next;
//             count++;
//         }
//         if(index>count)
//         {
//             return ;
//         }
//         if(index==0)
//         {
//             addAtHead(val);
//             return;
//         }
//         else if(count == index)
//         {
//             addAtTail(val);
//             return;
//         }
//         else
//         {
//             temp=head;
//             while(temp!=NULL and index>0)
//             {
//                 temp=temp->next;
//                 index--;
//             }
//             Node* newnode = new Node(val);
//             Node* temp2 = temp->prev;
//             temp->prev->next = newnode;
//             temp->prev = newnode;
//             newnode->prev = temp2;
//             newnode->next = temp;
//         }   
   
//     }
    
//      void deleteAtIndex(int index) {
//         Node* temp = head;
//         int count = 0;
//         while(temp!=NULL )
//         {
//             temp=temp->next;
//             count++;
//         }
//         if(index>=count)
//         {
//             // pass
//             return;
//         }
        
//         if(count==1 and index==0) 
//         {
//             head= NULL;
//             return;
//         }
//         else if(count-1 == index)
//         {
           
//             tail=tail->prev;
//             tail->next = NULL;
//             return;
//         }
//         else
//         {
//             if(index==0)
//             {
//                 head->next->prev = NULL;
//                 head = head->next;
//                 return;
//             }
//             temp=head;
//             while(temp!=NULL and index>0)
//             {
//                 temp=temp->next;
//                 index--;
//             }
        
//             Node* temp2 = temp->next;
//             temp->prev->next = temp2;
//             temp->next->prev = temp->prev;
            
//         }   
//     }
// };
// /**
//  * Your MyLinkedList object will be instantiated and called as such:
//  * MyLinkedList* obj = new MyLinkedList();
//  * int param_1 = obj->get(index);
//  * obj->addAtHead(val);
//  * obj->addAtTail(val);
//  * obj->addAtIndex(index,val);
//  * obj->deleteAtIndex(index);
//  */