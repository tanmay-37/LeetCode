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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prevNode = dummy;

        for(int i = 0;i<left - 1;i++){
            prevNode = prevNode->next;
        }
        ListNode* curr = prevNode->next;

        for(int i = 0;i<right - left;i++){
            ListNode* temp = curr->next;
            curr->next = temp->next;
            temp->next = prevNode->next;
            prevNode->next = temp;
        }
        return dummy->next;
    }
};