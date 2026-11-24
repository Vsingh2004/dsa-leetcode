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
        if(k == 0) return head;
        
        int count = 0;

        ListNode *curr = head;
        ListNode *temp2 = head;
        ListNode *newTail = NULL;

        while(temp2->next!=NULL){

            if(count == len-k-1){
                head = temp2->next;
                newTail = temp2;
            }

            temp2 = temp2->next;
            count++;
        }

        temp2->next = curr;
        newTail->next = NULL;



        return head;
    }
};