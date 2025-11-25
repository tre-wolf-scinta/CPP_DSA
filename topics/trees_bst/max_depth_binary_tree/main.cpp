/**
    Problem: Maximum Depth of Binary Tree

    Problem Statement: 

    You are given the root of a binary tree. The depth (or height) of a binary tree is defined as the number 
    of nodes along the longest path from the root node down to any leaf node.

    Your task is to compute and return the maximum depth of the tree.

    A leaf node is a node with no children.

    Input:
        - A pointer/reference to the root node of a binary tree. The tree may be empty (root == nullptr).

    Output:
        - An integer representing the maximum depth of the binary tree. For an empty tree, the depth is 0.

    Constraints:
        - The number of nodes in the tree is in the range [0, 10^5].
        - Node values are typically integers (their actual values do not affect the depth).

    Target Time Complexity: O(n) 
        // where n is the number of nodes in the tree

    Target Extra Space: 
        - O(h) for recursion stack in DFS, where h is the height of the tree
        - O(n) in the worst case for a skewed tree
**/