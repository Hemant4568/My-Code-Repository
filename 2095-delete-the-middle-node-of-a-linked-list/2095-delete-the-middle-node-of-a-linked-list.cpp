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
        if(head==NULL or head->next==NULL) return NULL;
        ListNode *temp=head;
         ListNode *temp1=head;
        ListNode* prev=NULL;
        while(temp!=NULL && temp->next!=NULL)
        {
            temp=temp->next->next;
            prev=temp1;
            temp1=temp1->next;
        }
        prev->next=temp1->next;
        return head;
    }
};