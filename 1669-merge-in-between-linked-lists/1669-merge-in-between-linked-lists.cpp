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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp1=list1;
        ListNode* temp2=list1;
        ListNode* temp3=list2;
        for(int i=0;i<=b;i++)
        {
            if(i<a-1)
            temp1=temp1->next;
            temp2=temp2->next;
        }
        while(temp3->next!=NULL)
        {
            temp3=temp3->next;
        }
        temp1->next=list2;
        temp3->next=temp2;
        return list1;
    }
};