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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;

        ListNode* temp = head;
        ListNode * ansHead = nullptr;

        while(temp){
            ListNode *newNode = new ListNode(temp->val);
            if(ansHead == NULL){
                ansHead = newNode;
            }else{
                newNode->next = ansHead;
                ansHead = newNode;
            }

            temp = temp->next;
        }

        return ansHead;

    }
};