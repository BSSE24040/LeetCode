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
ListNode*getMid(ListNode*head){
        ListNode*slow=head;

        ListNode*fast=head->next;

        while(fast&&fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }

        return slow;
       }


       ListNode*merger(ListNode*left,ListNode*right){
        if(!left){
            return right;
        }
        if(!right){
            return left;
        }


        ListNode*result=nullptr;

        if(left->val<right->val){
            result=left;
            result->next=merger(left->next,right);
        } 
        
         else{
            
            result=right;
            result->next=merger(left,right->next);
         }
        return result;
       }



    ListNode* sortList(ListNode* head) {
        

        if(head==nullptr||head->next==nullptr){
            return head;
        }
        ListNode*mid=getMid(head);

ListNode*next=mid->next;
mid->next=nullptr;

      ListNode*left=sortList(head);
      ListNode*right=sortList(next);
        

        return merger(left,right);
    }
       
};