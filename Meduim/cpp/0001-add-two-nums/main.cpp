#include <iostream>
#include "Solution.h"
#include "ListNode.h"

int main() {
    ListNode *l1 = new ListNode(2, new ListNode(4, new ListNode(3)));

    ListNode *l2 = new ListNode(5, new ListNode(6, new ListNode(4)));

    Solution sol;
    ListNode *result = sol.addTwoNumbers(l1, l2);

    while (result != nullptr) {
        std::cout << result->val << " ";
        result = result->next;
    }
}
