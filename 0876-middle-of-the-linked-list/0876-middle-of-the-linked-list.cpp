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
    ListNode* middleNode(ListNode* head) {
        if(head->next == NULL) return head;
        
        int size = 0;
        ListNode* temp = head;

        while(temp){
            size++;

            temp = temp->next;
        }

        ListNode* ans = head;
        int pos = (size/2) +1;

        for(int i = 1; i<pos; i++){
            ans = ans->next;
        }

        return ans;
    }
};