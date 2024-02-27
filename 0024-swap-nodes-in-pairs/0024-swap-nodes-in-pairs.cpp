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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL)
            return head ;
        ListNode* temp=head;
        ListNode* temp1=head->next;
        while(temp->next!=NULL&&temp1->next)
        {
            swap(temp->val,temp1->val);
            temp=temp->next->next;
            temp1=temp1->next->next;
        }
        if(temp1 && temp)
            swap(temp1->val,temp->val);
        return head;
    }
};