/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:



ListNode*getKth(ListNode*prevGroup,int k){

    while(prevGroup!=nullptr&&k>0){
        prevGroup=prevGroup->next;
        k--;
    }
    return prevGroup;
}

    ListNode* reverseKGroup(ListNode* head, int k) {

       ListNode dummy(0);
       dummy.next=head;
       
       ListNode*prevGroup=&dummy;


while(true){


    ListNode*kth=getKth(prevGroup,k);

if(kth==nullptr){
    break;
}

    ListNode*nextGroup=kth->next;


    ListNode*prev=nextGroup;
    ListNode*curr=prevGroup->next;


    while(curr!=nextGroup){
        ListNode*temp=curr->next;
         curr->next=prev;
         prev=curr;
         curr=temp;
    }

     
    ListNode*temp=prevGroup->next;

  prevGroup->next=kth;

prevGroup=temp;
}


return dummy.next;
    
    }   
    
};