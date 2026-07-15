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
    ListNode* insertionSortList(ListNode* head) {
        ListNode*sorted=nullptr; ListNode*temp=head; while(temp!=nullptr){ ListNode*next=temp->next; if(sorted==nullptr||temp->val<sorted->val){ temp->next=sorted; sorted =temp; } else{ ListNode*tempy=sorted; while(tempy->next!=nullptr&&tempy->next->val<temp->val){ tempy=tempy->next; } temp->next=tempy->next; tempy->next=temp; } temp=next; } head=sorted; return head; }
};