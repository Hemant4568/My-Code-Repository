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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* temp=head;
        int c=1;
        while(temp->next!=NULL)
        {
            c++;
            temp=temp->next;
        }
        
        int k=1;
        ListNode* temp1=NULL;
                   temp=head;
        if(c-n+1==1)
        {
            temp=temp->next;
            return temp;
        }
        while(temp!=NULL && k<c-n+1)
        {
            k++;
            temp1=temp;
            temp=temp->next;
        }
        if(temp!=NULL)
        {
            temp1->next=temp->next;
            
        }      
        return head;
    }
};