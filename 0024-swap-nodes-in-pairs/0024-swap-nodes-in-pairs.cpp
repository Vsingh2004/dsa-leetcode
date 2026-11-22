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

        if(head == NULL || head->next == NULL) return head;
        
        ListNode* dummy = new ListNode(0);

        dummy->next = head;
        ListNode *prev = dummy;
        ListNode*t1 = prev->next;
        ListNode*t2 = t1->next;
        
        while(t1 && t2){
            t1->next = t2->next;
            t2->next = t1;
            prev->next = t2;
            
            prev = t1;

            t1=t1->next;
            if(t1) t2 = t1->next;
        };

        return dummy->next;
    }
};