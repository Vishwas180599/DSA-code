
// class LRUCache {
// public:
 
//     class DLinkedNode
//     {
//         public:
//             int key; 
//             int value;
//             DLinkedNode* prev;
//             DLinkedNode* next;
//             DLinkedNode(){};
//             DLinkedNode(int _key, int _val)
//             {
//                 key = _key;
//                 value = _val;
//             }
//     };
//     int capacity=0;
//     map<int,DLinkedNode*> cache;  // map the keys to the linked list
//         int size = 0; // capacity of the LRU cache
    
      
        
//     DLinkedNode *head =new DLinkedNode(-1,-1);
//         DLinkedNode *tail=new  DLinkedNode(-1,-1);
    
       
//      void deleteNodeFromFront(){
//         DLinkedNode* tempNode=head->next;
//         head->next=head->next->next;
//         tempNode->next->prev=head;
        
//         tempNode->next=NULL;
//         tempNode->prev=NULL;
//         size-=1;
//         cache.erase(tempNode->key);
//         return;
        
//     }
//     LRUCache(int capacity) {
          
        
//         this->capacity = capacity;
//          head->next=tail;
//         tail->prev=head;
//         head->prev=tail;
//         tail->next=head;
        
//     }
//     void deleteNode(DLinkedNode* currentNode){
//         DLinkedNode* tempNode=currentNode->prev;
//         currentNode->next->prev=tempNode;
//         tempNode->next=currentNode->next;
        
//         currentNode->next=NULL;
//         currentNode->prev=NULL;
        
//         size-=1;
//         cache.erase(currentNode->key);
//         return;
//     }
   
//     void addNode(DLinkedNode* newNode){
//         newNode->next=tail;
//         DLinkedNode* tempNode=tail->prev;
//         tail->prev=newNode;
//         newNode->prev=tempNode;
//         tempNode->next=newNode;
//         size+=1;
//         cache[newNode->key]=newNode;
        
//     }
    
//     int get(int key) {
//         if(cache.find(key)==cache.end())
//             return -1;
        
//         DLinkedNode* currentNode=cache[key];
//         deleteNode(currentNode);
//         addNode(currentNode);
//         return currentNode->value;
//     }
    
//     void put(int key, int value) {
//         if(cache.find(key)!=cache.end()){
//             DLinkedNode* currentNode=cache[key];
//             deleteNode(currentNode);
//             currentNode->value =value;
//             addNode(currentNode);
//             return;
//         }
        
//         if(size==capacity)
//             deleteNodeFromFront();
//         DLinkedNode* newNode=new DLinkedNode(key,value);
//         addNode(newNode);
//         return;
//     }
// };

// /**
//  * Your LRUCache object will be instantiated and called as such:
//  * LRUCache* obj = new LRUCache(capacity);
//  * int param_1 = obj->get(key);
//  * obj->put(key,value);
//  */