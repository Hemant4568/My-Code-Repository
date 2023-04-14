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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* f=head;
        ListNode* s=head;
        int c=0;
        int i=k-1;
        while(temp!=NULL)
        {
            if(i==0)
                f=temp;
            temp=temp->next;
            c++;
            i--;
        }
        temp=head;
       
        while(c-k>0)
        {
            s=s->next;
            c--;
        }
        
        swap(f->val,s->val);
        return head;
        
    }
};