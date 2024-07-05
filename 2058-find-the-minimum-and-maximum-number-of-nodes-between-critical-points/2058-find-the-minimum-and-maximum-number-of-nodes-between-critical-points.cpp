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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if (!head || !head->next || !head->next->next) {
        return {-1, -1};
    }

    int first = -1, last = -1, minDist = INT_MAX;
    int idx = 1;
    ListNode* p = head;
    ListNode* q = head->next;

    while (q->next != nullptr) {
        if ((q->val > p->val && q->val > q->next->val) || 
            (q->val < p->val && q->val < q->next->val)) {
            
            if (first == -1) {
                first = idx;
            } else {
                minDist = min(minDist, idx - last);
            }
            last = idx;
        }

        p = q;
        q = q->next;
        idx++;
    }

    if (first == last) {
        return {-1, -1};
    }

    int maxDist = last - first;
    return {minDist, maxDist};
    }
};