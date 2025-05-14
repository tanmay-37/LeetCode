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
        if(head == NULL || head->next == NULL)
            return head;
        ListNode* temp = head;
        vector<int> v;
        while(temp && temp->next){
            v.push_back(temp->val);
            temp = temp->next->next;
        }
        if(temp) v.push_back(temp->val);
        temp = head->next;
        while(temp && temp->next){
            v.push_back(temp->val);
            temp = temp->next->next;
        }
        if(temp) v.push_back(temp->val);

        int i = 0;
        temp = head;
        while(temp){
            temp->val = v[i];
            i++;
            temp = temp->next;
        }
        return head;
    }
};