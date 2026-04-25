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
    bool hasCycle(ListNode* head) {
        std::unordered_map<ListNode*, int> address_count;
        ListNode* tail = head;

        while (tail) {
            if (address_count[tail->next] > 1) return true;
            address_count[tail->next]++;
            tail = tail->next;
        }
        return false;
    }
};
