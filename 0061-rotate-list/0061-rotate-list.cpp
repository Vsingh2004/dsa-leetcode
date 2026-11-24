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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL) return head;

        ListNode *temp = head;
        int len = 0;

        while(temp){
            temp = temp->next;
            len++;
        }

        k = k%len;
        int count = 0;

        ListNode* prev = head;
        ListNode* curr = head->next;

        while(count<k){

            while(curr->next!=NULL){
                 prev = prev->next;
                 curr= curr->next;
            }

            curr->next = head;
            head = curr;
            prev->next = NULL;

            prev = head;
            curr = head->next;
            count++;
        }

        return head;
    }
};