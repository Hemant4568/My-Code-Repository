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
    void reorderList(ListNode* head) {
        vector<int>temp;
        ListNode* temp1=head;
        ListNode* temp2=head;
        int j=0;
        while(temp1!=NULL)
        {
            temp.push_back(temp1->val);
            temp1=temp1->next;
            cout<<temp[j]<<" ";
            j++;
        }
        int n=temp.size();
        int start=0;
        int end=n-1;
        while(end>=start)
        {
            temp2->val=temp[start];
            temp2=temp2->next;
            if(start==end)
                break;
            temp2->val=temp[end];
            temp2=temp2->next;
            start++;
            end--;
        }
        
    }
};