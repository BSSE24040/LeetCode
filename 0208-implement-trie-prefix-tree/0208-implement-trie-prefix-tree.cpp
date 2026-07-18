
class TrieNode{
public:
char c;

TrieNode *children[26];
bool isTerminal;


TrieNode(char ch){
    c=ch;
    for(int i=0;i<26;i++){
        children[i]=nullptr;
    }
    isTerminal=false;
}


};

class Trie {
TrieNode * root;
    
public:
    Trie() {
        
 root=new TrieNode('\0');
    }
    
    void insert(string word) {


        TrieNode*temp=root;

        for(char ch: word){

            int index=ch-'a';

            if(temp->children[index]==nullptr){
               temp->children[index]=new TrieNode(ch); 
            }
            temp=temp->children[index];

        }

temp->isTerminal=true; 
        
    }
    
    bool search(string word) {
        TrieNode*temp=root;
int index;
        for(char ch:word){

              index=ch-'a';

            if(temp->children[index]==nullptr){
               return false; 
            }
            temp=temp->children[index];
        }
        return temp->isTerminal;
    }
    
    bool startsWith(string prefix) {
        TrieNode*temp=root;


   for(char ch:prefix){

             int index=ch-'a';

            if(temp->children[index]==nullptr){
               return false; 
            }
            temp=temp->children[index];
        }
        return true;






    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */