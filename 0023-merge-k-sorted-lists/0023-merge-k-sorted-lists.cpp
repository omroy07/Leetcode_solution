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

#include <vector>
#include <algorithm>

class Solution {
public:
    ListNode* mergeKLists(std::vector<ListNode*>& lists) {
        std::vector<int> all_values;

        // Step 1: Collect all values into a single vector
        for (ListNode* list : lists) {
            ListNode* current = list;
            while (current != nullptr) {
                all_values.push_back(current->val);
                current = current->next;
            }
        }

        // Handle edge case where all lists are empty
        if (all_values.empty()) {
            return nullptr;
        }

        // Step 2: Sort the vector
        std::sort(all_values.begin(), all_values.end());

        // Step 3: Rebuild the sorted linked list
        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;
        for (int value : all_values) {
            tail->next = new ListNode(value);
            tail = tail->next;
        }
        return dummy->next;
    }
};