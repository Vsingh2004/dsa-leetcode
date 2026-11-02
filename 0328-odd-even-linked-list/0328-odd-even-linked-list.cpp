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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL) return NULL;
        ListNode* oddHead = new ListNode(-1);
        ListNode* evenHead = new ListNode(-1);

        ListNode* odd = oddHead;
        ListNode* even = evenHead;

        ListNode* temp = head;
        int index = 1;

        while(temp){
            if(index % 2 == 1) {
                odd->next = new ListNode(temp->val);
                odd = odd->next;
            }
            else {
                even->next = new ListNode(temp->val);
                even = even->next;
            }

            temp = temp->next;
            index++;
        }

        odd->next = evenHead->next;

        return oddHead->next;
    }
};