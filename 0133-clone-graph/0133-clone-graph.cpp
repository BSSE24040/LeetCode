/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
     unordered_map<Node*,Node*> maps;
    Node*dfs(Node*node){


   if(maps.count(node)){
    return maps[node];
   }

   Node*clone=new Node(node->val);

   maps[node]=clone;

   for(Node*neighbor:node->neighbors){

    clone->neighbors.push_back(dfs(neighbor));
   }

   return clone;

    }
    Node* cloneGraph(Node* node) {


         if(node==nullptr){
            return nullptr;
         }  

         return dfs(node);
        
    }
};