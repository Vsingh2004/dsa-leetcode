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
    int getDecimalValue(ListNode* head) {
        ListNode* temp = head;
        int size = 0;

        while(temp){
            size++;

            temp = temp->next;
        }

        temp = head;
        int index = 1;
        int sum = 0;

        while(temp){
            sum += (temp->val) * pow(2,size-index);

            index++;
            temp = temp->next;
        }

        return sum;
    }
};