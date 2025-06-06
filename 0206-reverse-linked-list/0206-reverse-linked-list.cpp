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
        ListNode* temp = head;  
   
   // Initialize pointer 'prev' to NULL,
   // representing the previous node
   ListNode* prev = NULL;  
   while(temp != NULL){  
       ListNode* front = temp->next;  
       temp->next = prev;  
       prev = temp;  
       temp = front; 
   }
   return prev;  
    }
};