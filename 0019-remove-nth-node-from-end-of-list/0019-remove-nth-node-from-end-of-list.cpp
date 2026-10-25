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
        if(head == NULL) return head;
    
        ListNode *temp1 = head;
        int size = 0;

        while(temp1){
            temp1 = temp1->next;
            size++;
        }

        int pos = size - n;

        // If first node needs to be deleted
        if(pos == 0){
            return head->next;
        }


        int currPos = 1;
        ListNode *temp2 = head;

         while(currPos < pos){
            temp2 = temp2->next;
            currPos ++;
         }



         temp2->next = temp2->next->next;

    return head;
    }

};