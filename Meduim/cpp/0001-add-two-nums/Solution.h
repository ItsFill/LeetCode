#ifndef ADDTWONUMS_SOLUTION_H
#define ADDTWONUMS_SOLUTION_H

#include "ListNode.h"

class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        ListNode *head = new ListNode();
        ListNode *curr = head;
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int x = (l1 != nullptr) ? l1->val : 0;
            int y = (l2 != nullptr) ? l2->val : 0;

            int sum = x + y + carry;

            carry = sum / 10;

            curr->next = new ListNode(sum % 10);

            curr = curr->next;

            if (l1 != nullptr) l1 = l1->next;
            if (l2 != nullptr) l2 = l2->next;
        }
        ListNode *result = head -> next;
        delete head;
        return result;
    }
};

#endif //ADDTWONUMS_SOLUTION_H