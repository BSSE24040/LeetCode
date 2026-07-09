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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    

        int sum;
        stack<int> sp;
        stack<int> sp1;

        while(l1!=nullptr){
            sp.push(l1->val);
         l1=l1->next;
        }

         while(l2!=nullptr){
            sp1.push(l2->val);
         l2=l2->next;
        }

      
       ListNode* head =nullptr;
       int carry=0;
     while(!sp.empty()||!sp1.empty()||carry){

        int num1=0;
        int num2=0;

        if(!sp.empty()){
        num1 = sp.top();
sp.pop();
        }
        if(!sp1.empty()){
       num2 = sp1.top();
sp1.pop();
        }
         sum=num1+num2+carry;
         
            int digit =sum%10;
          ListNode *node =new ListNode(digit);
          carry=sum/10;
             node->next=head;
         head=node;
          
        }
        return head;
     }


};