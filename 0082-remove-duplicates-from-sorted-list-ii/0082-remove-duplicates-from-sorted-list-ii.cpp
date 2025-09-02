/**
 * Definition for singly-linked list.
 * struct ListNode {
 * int val;
 * ListNode *next;
 * ListNode() : val(0), next(nullptr) {}
 * ListNode(int x) : val(x), next(nullptr) {}
 * ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head) {
            return nullptr;
        }
        unordered_map<int, int> freq;
        ListNode* temp = head;
        while (temp) {
            freq[temp->val]++;
            temp = temp->next;
        }
        ListNode* dummy = new ListNode(0);
        ListNode* current = dummy;
        temp = head;
        while (temp) {
            if (freq[temp->val] == 1) {
                current->next = temp;
                current = current->next;
            }
            temp = temp->next;
        }
        current->next = nullptr; 
        return dummy->next;
    }
};