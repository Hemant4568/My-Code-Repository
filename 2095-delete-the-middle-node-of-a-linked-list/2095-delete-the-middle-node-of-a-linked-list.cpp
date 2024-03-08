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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode*slow=head;
        int n=0;
        while(slow!=NULL)
        {
            n++;
            slow=slow->next;
        }
        if(n==1)
            return NULL;
        ListNode *temp=head;
         ListNode *temp1=head;
        ListNode* prev=head;
        while(temp!=NULL && temp->next!=NULL)
        {
            prev=temp1;
            temp=temp->next->next;
            temp1=temp1->next;
        }
        prev->next=temp1->next;
        return head;
    }
};