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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp=head;
        ListNode* sum=head;
        ListNode *ans=sum;
        while(temp)
        {
            int a=0;
            temp=temp->next;
            if(!temp)
                break;
            while(temp->val!=0)
            {
                a+=temp->val;
                temp=temp->next;
            }
            sum->val=a;
            ans=sum;
            sum=sum->next;
        }
        ans->next=NULL;
        return head;
    }
};
   