/**
    Problem: Reverse Linked List

    Problem Statement: 

    You are given the head of a singly linked list. Your task is to reverse the list and return the new head.

    Reversing a linked list means transforming the list so that all next pointers point in the opposite direction,
    turning the last node into the new head and the original head into the last node.

    Input:
        - A pointer/reference to the head node of a singly linked list. The list may be empty (head == nullptr).

    Output:
        - A pointer/reference to the head of the reversed linked list.

    Constraints:
        - The number of nodes in the list is in the range [0, 10^5].
        - Node values are typically integers (their actual values do not affect reversal).

    Target Time Complexity: O(n)
        // where n is the number of nodes in the linked list

    Target Extra Space: O(1)
        // in-place reversal using iterative pointer manipulation
**/