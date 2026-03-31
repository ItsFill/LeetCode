#ifndef ADDTWONUMS_LISTNODE_H
#define ADDTWONUMS_LISTNODE_H

struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {
    }

    ListNode(int x) : val(x), next(nullptr) {
    }

    ListNode(int x, ListNode *next) : val(x), next(next) {
    }
};

#endif //ADDTWONUMS_LISTNODE_H