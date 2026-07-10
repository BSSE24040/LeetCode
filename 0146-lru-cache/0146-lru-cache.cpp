class LRUCache {
    
    
public:
 
 class Node{

    public:
    int key;
    int value;
    Node*prev;
    Node*next;

 Node(int k,int v):key(k),value(v),prev(nullptr),next(nullptr){}
 };
 int capacity;
 unordered_map<int,Node*>map;
 Node*tail;
 Node*head;

   LRUCache(int capacity)
   {
    this->capacity=capacity;
    head=new Node(-1,-1);
     tail=new Node(-1,-1);
     head->next=tail;
     tail->prev=head;
}
 void remove(Node* node) {
    Node*prevNode=node->prev;
    Node*nextNode=node->next;

prevNode->next=nextNode;
nextNode->prev=prevNode;

 }
  void insert(Node* node) {
    node->next=head->next;
    node->prev=head;
    node->next->prev=node;
head->next=node;
  }
  int get(int key){

    if(map.find(key)==map.end()){
return -1;
    }

Node*node=map[key];
remove(node);
insert(node);
return node->value;

  }

   void put(int key, int value){

 if(map.find(key)!=map.end()){
Node*node=map[key];
node->value=value;
remove(node);
insert(node);

return;
    }

    if(map.size()==capacity){
        Node*lru=tail->prev;
        remove(lru);
        map.erase(lru->key);
        
        delete lru;
    }
    Node*node=new Node(key,value);
    insert(node);
    map[key]=node;
   }
 
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */