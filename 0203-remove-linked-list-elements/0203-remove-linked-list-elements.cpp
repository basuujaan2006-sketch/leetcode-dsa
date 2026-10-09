
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* curr = head;

        while (curr != nullptr && curr->next != nullptr) {
            if (curr->next->val == val) {
                curr->next = curr->next->next;
            } else {
                curr = curr->next;
            }
        }

        if (head != nullptr && head->val == val) {
            head = head->next;
        }

        return head;
    }
};
